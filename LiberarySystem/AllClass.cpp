#include "stdafx.h"
#include "LiberarySystem.h"
#include "AllClass.h"

#include <string>
#include <fstream>
using namespace std;

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

CWholeClass CenterControl;
string R_Account;
string R_Password;

Book::Book()
{
	Book_name="0";
	Book_num="0";
    Book_author="0";
	Book_press="0";
	Book_date="0";
	Book_brodate="0";
	Book_price=0.0;
	Sum=0;
}

string Book::Get_BName()
{
	return Book_name;
}

string Book::Get_BNum()
{
	return Book_num;
}
string Book::Get_BAuthor(){

	return Book_author;
}
string Book::Get_BPress(){

		return Book_press;
}
string Book::Get_BDate(){

	return Book_date;
}
string Book::Get_BroDate(){

	return Book_brodate;
}
float Book::Get_BPrice(){

	return Book_price;
}

int Book::Get_Sum()
{
	return Sum;
}

void Book::Set_BName(string name)
{
	Book_name=name;
}

void Book::Set_BNum(string num)
{
	Book_num=num;
}

void Book::Set_BAuthor(string author){

	Book_author=author;
}
void Book::Set_BPress(string press){
	Book_press=press;
}
void Book::Set_BDate(string date){

	Book_date=date;
}
void Book::Set_BroDate(string brodate){

	Book_brodate=brodate;
}
void Book::Set_BPrice(float price){

	Book_price=price;
}
void Book::Set_BSum(int sum)
{
	Sum=sum;
}

bool Book::Bro_Book()
{
	if(Sum==0)
	{
	AfxMessageBox("该书现在馆藏数为0,不可借阅");
		return false;
	}
	Sum-=1;
	return true;
}

void Book::Re_Book()
{
	Sum+=1;
}

void Book::Add_Book(int num)
{
	Sum+=num;
}

Book &Book::operator =(const Book &book)
{
	this->Book_name=book.Book_name;
	this->Book_num=book.Book_num;
	this->Book_author=book.Book_author;
	this->Book_press=book.Book_press;
	this->Book_date=book.Book_date;
	this->Book_brodate=book.Book_brodate;
	this->Book_price=book.Book_price;
	this->Sum=book.Sum;
	return *this;
}




Book_DBase::Book_DBase()
{
	max_sum=BOOK_MAX_SUM;
	cur_sum=0;
	books=new Book[BOOK_MAX_SUM];
}

bool Book_DBase::Search_Book(string name,Book &book,int &pos)
{
	for(int i=0;i<cur_sum;i++)
		if(books[i].Get_BName()==name)
		{
			book=books[i];
			pos=i;
			return true;
		}
	return false;
}

bool Book_DBase::Search_Book_By_num(string booknum,Book &book,int &pos){
    
	for(int i=0;i<cur_sum;i++){
		if(books[i].Get_BNum()==booknum)
		{

			book=books[i];
            pos=i;
			return true;
		}
	}
     return false;
}

bool Book_DBase::Add_Book(string name,Book book)
{
	Book temp_book;
	int pos=-1;
	unsigned int sum=0;
	if(Search_Book(name,temp_book,pos))
	{
	AfxMessageBox("该书馆中已存，会在原先的存量上加上新增的存量");
		temp_book.Add_Book(book.Get_Sum());
		Update_Info_Book(temp_book);
		Write_into_file();
		return true;
	}
	else
	{
		if(cur_sum>BOOK_MAX_SUM)
		{	
		AfxMessageBox("馆藏种类已达上限，无法再添加新书");
			return false;
		}

		books[cur_sum]=book;
		cur_sum++;
		Write_into_file();
		return true;
	}
	return true;
}


bool Book_DBase::Del_Book(string name,Book &book)
{
	Book temp_book;
	int pos=-1;
	if(Search_Book(name,temp_book,pos))
	{
		book=temp_book;
		for(int i=pos+1;i<cur_sum;i++)
			books[i-1]=books[i];
		cur_sum--;
		Write_into_file();
		return true;
	}
	else
	{
		AfxMessageBox("馆中无该书信息");
		return false;
	}
}

void Book_DBase::Update_Info_Book(Book book)
{
	for(int i=0;i<cur_sum;i++)
	{
		if(books[i].Get_BName()==book.Get_BName())
		{
			books[i]=book;
			return ;
		}
	}
}

bool Book_DBase::Init_BookDabse()
{
	string name,num,author,press,date,brodate;
	float price;
	int sum;
	ifstream file;

	file.open("./Datafile/books.txt");
	int i=0;
	if(!file)
	{
     	AfxMessageBox("文件\"books.txt\"打开失败");
		return false;
	}
	else
	{
		while(!file.eof())
		{
			file>>name>>num>>author>>press>>date>>brodate>>price>>sum;
			books[i].Set_BName(name);
			books[i].Set_BNum(num);
			books[i].Set_BAuthor(author);
            books[i].Set_BPress(press);
			books[i].Set_BDate(date);
			books[i].Set_BroDate(brodate);
			books[i].Set_BPrice(price);
			books[i].Set_BSum(sum);
			i++;
		}
		cur_sum=i;
		file.close();
		return true;
	}
}

void Book_DBase::Write_into_file()
{
	ofstream file("./Datafile/books.txt");
	if(!file)
	{
	AfxMessageBox("文件\"books.txt\"打开失败");
	}
	else
	{
		for(int i=0;i<cur_sum-1;i++)

		{	file<<books[i].Get_BName()<<"  "<<books[i].Get_BNum()<<"  "
			<<books[i].Get_BAuthor()<<"  "<<books[i].Get_BPress()<<"  "
			<<books[i].Get_BDate()<<"  "<<books[i].Get_BroDate()<<"  "
			<<books[i].Get_BPrice()<<"  "<<books[i].Get_Sum()<<endl;
		}
      
		file<<books[i].Get_BName()<<"  "<<books[i].Get_BNum()<<"  "
			<<books[i].Get_BAuthor()<<"  "<<books[i].Get_BPress()<<"  "
			<<books[i].Get_BDate()<<"  "<<books[i].Get_BroDate()<<"  "
			<<books[i].Get_BPrice()<<"  "<<books[i].Get_Sum()<<endl;
		file.close();
		
	}
}



Reader::Reader()
{
	Reader_name="0";
	Reader_num="0";
	Reader_pro="0";
	Reader_account="0";
	Reader_password="0";
	Cur_sum=0;
}

Reader::Reader(const Reader &reader)
{
	this->Reader_name=reader.Reader_name;
	this->Reader_num=reader.Reader_num;
	this->Reader_pro=reader.Reader_pro;	
	this->Reader_account=reader.Reader_account;
	this->Reader_password=reader.Reader_password;
	this->Cur_sum=reader.Cur_sum;
}

string Reader::Get_RAccount()
{
	return Reader_account;
}

string Reader::Get_RPassword()
{
	return Reader_password;
}

string Reader::Get_RName()
{
	return Reader_name;
}

string Reader::Get_RNum()
{
	return Reader_num;
}

string Reader::Get_RPro()
{
	return Reader_pro;
}

int Reader::Get_Cur_Sum()
{
	return Cur_sum;
}

void Reader::Set_RName(string name)
{
	Reader_name=name;
}

void Reader::Set_RNum(string num)
{
	Reader_num=num;
}

void Reader::Set_RPro(string pro)
{
	Reader_pro=pro;
}

void Reader::Set_RAccount(string account)
{
	Reader_account=account;
}

void Reader::Set_RPassword(string password)
{
	Reader_password=password;
}

void Reader::Set_RCur_Sum()
{
	Cur_sum=0;
}

void Reader::Set_RCur_Sum(int sum)
{
	Cur_sum=sum;
}

bool Reader::Search_in_Bro(string name,Book &book,int &pos)
{
	for(int i=0;i<Cur_sum;i++)
		if(Bro_books[i].Get_BName()==name)
		{
			book=Bro_books[i];
			pos=i;
			return true;
		}
	return false;
}

bool Reader::Search_in_Bronum(string num,Book &book,int &pos)
{
	for(int i=0;i<Cur_sum;i++)
		if(Bro_books[i].Get_BNum()==num)
		{
			book=Bro_books[i];
			pos=i;
			return true;
		}
	return false;
}

bool Reader::Bro_Book(Book book)
{
	int pos=-1;
	if(Search_in_Bro(book.Get_BName(),book,pos))
	{
	AfxMessageBox("该书你已借阅，不支持重复借阅");
		return false;
	}
	else if(Cur_sum>10)
	{
	AfxMessageBox("你的借阅数已达上限，要先还了书才可以借");
		return false;
	}
	else
	{
		if(book.Bro_Book())
		{
			CenterControl.BDase.Update_Info_Book(book);
			CenterControl.BDase.Write_into_file();
			Bro_books[Cur_sum]=book;
			Cur_sum++;
			return true;
		}
	}
	return false;
}

bool Reader::Re_Book(Book &book)
{
	int pos=-1;
	if(Search_in_Bro(book.Get_BName(),book,pos))
	{
		book.Re_Book();
		CenterControl.BDase.Update_Info_Book(book);
		CenterControl.BDase.Write_into_file();
		for(int i=pos+1;i<Cur_sum;i++)
			Bro_books[i-1]=Bro_books[i];
		Cur_sum--;
		return true;
	}
	else
	{
			AfxMessageBox("你并未借阅该书");
		return false;
	}
}

Reader &Reader::operator = (Reader& reader)
{
	this->Reader_name=reader.Reader_name;
	this->Reader_num=reader.Reader_num;
	this->Reader_pro=reader.Reader_pro;	
	this->Reader_account=reader.Reader_account;
	this->Reader_password=reader.Reader_password;
	this->Cur_sum=reader.Cur_sum;
	return *this;
}




Reader_DBase::Reader_DBase()
{
	max_sum=MAX_READER_NUM;
	cur_sum=0;
	readers=new Reader[max_sum];
}

bool Reader_DBase::Search_Reader(string num,Reader &reader,int &pos)
{
	for(int i=0;i<cur_sum;i++)
		if(readers[i].Get_RNum()==num)
		{
			reader=readers[i];
			pos=i;
			return true;
		}
	return false;
}

bool Reader_DBase::Search_Account(string account,Reader& reader,int& pos)
{
	for(int i=0;i<cur_sum;i++)
	{
		if(readers[i].Get_RAccount()==account)
		{
			reader=readers[i];
			pos=i;
			return true;
		}
	}
	return false;
}

bool Reader_DBase::Init_ReaderDbase()
{
	ifstream file;
	file.open("./Datafile/reader.txt");
	int i=0;
	if(!file)
	{
	AfxMessageBox("文件\"reader.txt\"打开失败");
		return false;
	}
	else
	{
		string account,password,name,num,pro;
		while(!file.eof())
		{
			file>>account>>password>>name>>num>>pro;
			readers[i].Set_RAccount(account);
			readers[i].Set_RPassword(password);
			readers[i].Set_RName(name);
			readers[i].Set_RNum(num);
			readers[i].Set_RPro(pro);
			readers[i].Set_RCur_Sum();
			i++;
		}
		cur_sum=i;
		file.close();
		return true;
	}
}

bool Reader_DBase::Write_into_file()
{
	ofstream file("./Datafile/reader.txt");
	int i=0;
	if(!file)
	{
			AfxMessageBox("文件\"reader.txt\"打开失败");
		return false;
	}
	else
	{
		for(i;i<cur_sum;i++)
		{
			file<<readers[i].Get_RAccount()<<"  "<<readers[i].Get_RPassword()<<"  "<<readers[i].Get_RName()<<"  "
				<<readers[i].Get_RNum()<<"  "<<readers[i].Get_RPro()<<endl;
		}
		file.close();
		return true;
	}
}

void Reader_DBase::Create_Bro_File()
{
	string filename;
	for(int i=0;i<cur_sum-1;i++)
	{
		filename=readers[i].Get_RAccount();
		filename="./Datafile/"+filename+".txt";
		const char *p=filename.data();
		ofstream file(p,ios::app);
		file.close();
	}
}

bool Reader_DBase::Save_Reader_Bro()
{
	string filename=CenterControl.Recent_Reader.Get_RAccount();
	filename="./Datafile/"+filename+".txt";
	const char *p=filename.data();
	ofstream file(p);
	if(!file)
	{
		return false;
	}
	else
	{
		for(int i=0;i<CenterControl.Recent_Reader.Get_Cur_Sum();i++)
		{
			file<<CenterControl.Recent_Reader.Bro_books[i].Get_BName()<<"    "
				<<CenterControl.Recent_Reader.Bro_books[i].Get_BNum()<<"    "
                <<CenterControl.Recent_Reader.Bro_books[i].Get_BAuthor()<<"    "
				<<CenterControl.Recent_Reader.Bro_books[i].Get_BPress()<<"    "
				<<CenterControl.Recent_Reader.Bro_books[i].Get_BDate()<<"    "
				<<CenterControl.Recent_Reader.Bro_books[i].Get_BroDate()<<"    "
				<<CenterControl.Recent_Reader.Bro_books[i].Get_BPrice()<<"    "<<endl;
			
		}
		file.close();
		return true;
	}
}

bool Reader_DBase::Read_Reader_Bro()
{
	string filename=CenterControl.Recent_Reader.Get_RAccount();
	filename="./Datafile/"+filename+".txt";
	const char *p=filename.data();
	ifstream file(p);
	if(!p)
	{
		AfxMessageBox("文件打开失败");
		return false;
	}
	else
	{
		int i=0;
		string name,num,author,press,date,brodate;
		float price=0.0;
		while(!file.eof())
		{
			file>>name>>num;
			CenterControl.Recent_Reader.Bro_books[i].Set_BName(name);
			CenterControl.Recent_Reader.Bro_books[i].Set_BNum(num);
            CenterControl.Recent_Reader.Bro_books[i].Set_BAuthor(author);
			CenterControl.Recent_Reader.Bro_books[i].Set_BPress(press);
			CenterControl.Recent_Reader.Bro_books[i].Set_BDate(date);
			CenterControl.Recent_Reader.Bro_books[i].Set_BroDate(brodate);
			CenterControl.Recent_Reader.Bro_books[i].Set_BPrice( price);
			CenterControl.Recent_Reader.Bro_books[i].Set_BSum(1);
			i++;
		}
		CenterControl.Recent_Reader.Set_RCur_Sum(i);
		file.close();
		return true;
	}
}

bool Reader_DBase::Add_Reader(Reader reader)
{
	if(cur_sum>=100)
	{
		AfxMessageBox("注册量达库存上限，无法添加新账户");
		return false;
	}
	else
	{
		readers[cur_sum]=reader;
		cur_sum++;
		Write_into_file();
		return true;
	}
}





CWholeClass::CWholeClass()
{
	login=new Login[100];
	account_sum=0;
}

CWholeClass::~CWholeClass()
{
	delete[]login;
}

void CWholeClass::INit_Login()


{
	int i=0;
	ifstream file_read;
	file_read.open("./Datafile/login.txt");
	if(!file_read)
	{
		AfxMessageBox("文件\"login.txt\"打开失败");
	}
	else
	{
		while(!file_read.eof())
		{
			file_read>>login[i].Account>>login[i].Password;
			i++;
		}
		account_sum=i;
		file_read.close();
	}
}

bool CWholeClass::Update_login_file()
{
	ofstream file_write;
	file_write.open("./Datafile/login.txt");
	if(!file_write)
	{
		AfxMessageBox("文件\"login.txt\"打开失败");
		return false;
	}
	for(int i=0;i<account_sum;i++)
		file_write<<login[i].Account<<"  "<<login[i].Password<<endl;
	return true;
}

bool CWholeClass::Search_the_Account(string account,int &pos)
{
	for(int i=0;i<account_sum;i++)
		if(login[i].Account==account)
		{
			pos=i;
			return true;
		}
		return false;
}

bool CWholeClass::Search_the_Password(int pos,string password)
{
	return (login[pos].Password==password);
}

bool CWholeClass::Add_login(Login newlogin)
{
	if(account_sum>=100)
	{
	AfxMessageBox("库存已满，无法再添加新读者");
		return false;
	}
	else
	{
		login[account_sum].Account=newlogin.Account;
		login[account_sum].Password=newlogin.Password;
		account_sum++;
		CenterControl.Update_login_file();
		return true;
	}
}

bool Reader_DBase::Del_Reader(string num,Reader &reader)
{
	Reader temp_reader;
	int pos=-1;
	if(Search_Reader(num,temp_reader,pos))
	{
		reader=temp_reader;
		for(int i=pos+1;i<cur_sum;i++)
			readers[i-1]=readers[i];
		cur_sum--;
		Write_into_file();
		return true;
	}
	else
	{
		AfxMessageBox("馆中无该读者");
		return false;
	}
}
bool Reader_DBase::Search_Account_By_past(string password,Reader& reader,int& pos)
{
	for(int i=0;i<cur_sum;i++)
	{
		if(readers[i].Get_RPassword()==password)
		{
			reader=readers[i];
			pos=i;
			return true;
		}
	}
	return false;
}

//bool CWholeClass:: Check_money(Book book,int month,int date,int year){
//	float fee;
 //  fee=(((book.Get_BroDate().year-year)*356+(book.Get_BroDate().month-month)*31+(book.Get_BroDate().date-date))-30)*0.1;
//	   if(fee==0.0){
//	   
//	      return true;
//	   }
//	   return false;
//}