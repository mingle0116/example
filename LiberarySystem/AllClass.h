#if !defined(_CENTERCLASS_H)
#define _ALLCLASS_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string>
using namespace std;

//struct Date{
//	int month;
//	int date;
//	int year;
//};

class Book
{
private:
	string Book_name; //书名
	string Book_num;  //编号
	string Book_author;//作者
	string Book_press;//出版社
	string Book_date;//出版日期
	string Book_brodate;//借阅时间
	float Book_price;//定价
	int Sum;  //馆藏数量
public:
	Book();
    virtual	~Book(){};
	string Get_BName(); //返回书名
	string Get_BNum();  //返回编号
	string Get_BAuthor();
    string Get_BPress();
	string Get_BDate();
	string  Get_BroDate(); //Date
	float  Get_BPrice();
	int    Get_Sum();    //返回馆藏容量
	void Set_BName(string name);  //设置书名
	void Set_BNum(string num);   //设置编号
	void Set_BAuthor(string author);
	void Set_BPress(string press);
	void Set_BDate(string date);
	void Set_BroDate(string date);
	void Set_BPrice(float price);
	void Set_BSum(int sum);  //设置存量
	bool Bro_Book();   //被借
	void Re_Book();   //被还
	void Add_Book(int num); //添加该书的总量
	Book &operator = (const Book &book); //重载=运算符
};

#define BOOK_MAX_SUM 100  //书库可存储的书的种类的上限

class Book_DBase
{
public:
	unsigned int max_sum;  //书的总类上限
	unsigned int cur_sum;  //当前书的总类
	Book *books; //书库
public:
	Book_DBase();
    virtual	~ Book_DBase(){};
	bool Search_Book(string name,Book &book,int &pos);  //在书库中搜索指定书名的书籍
	bool Search_Book_By_num(string booknum,Book &book,int &pos);
	bool Add_Book(string name,Book book);  //添加书籍
	bool Del_Book(string name,Book &book);  //删除书籍
	bool Init_BookDabse();  //初始化书库
	void Write_into_file();  //将书库信息写入文件
	void Update_Info_Book(Book book); //更新书库中指定书的信息
};

#define Max_Bro 10

class Reader
{
private:
	string Reader_name;   //读者名字
	string Reader_num;    //学号/编号
	string Reader_pro;    //专业
	string Reader_account;   //登录帐号
	string Reader_password;       //登录密码
	int Cur_sum;        //已借书本总量
public:
	Book Bro_books[Max_Bro];    //借书名单
	Reader();
    virtual	~ Reader(){};
	Reader(const Reader& reader);
	string Get_RAccount();  
	string Get_RPassword();
	string Get_RName();
	string Get_RNum();
	string Get_RPro();
	int Get_Cur_Sum();
	void Set_RName(string name); 
	void Set_RNum(string num);
	void Set_RPro(string pro);
	void Set_RAccount(string account);
	void Set_RPassword(string password);
	void Set_RCur_Sum();
	void Set_RCur_Sum(int sum);
	bool Search_in_Bro(string name,Book &book,int &pos);  //在已借阅的书中搜索指定书名的书籍
    bool Search_in_Bronum(string booknum,Book &book,int &pos);
	bool Bro_Book(Book book);      //借书
	bool Re_Book(Book &book);      //还书
	Reader &operator = (Reader &reader); //重载=运算符
};

#define MAX_READER_NUM 100 //读者库可包含的读者总数

class Reader_DBase
{
public:
	int max_sum; //读者上限
	int cur_sum; //当前读者总数
	Reader *readers; //读者库
public:
	Reader_DBase();
	virtual ~ Reader_DBase(){};
	bool Search_Reader(string num,Reader &reader,int &pos);  
	bool Search_Account(string account,Reader& reader,int& pos);  
	bool Init_ReaderDbase();  //初始化读者库
	bool Write_into_file();   //将读者库信息写入文件
	bool Save_Reader_Bro(); //通过文件保存读者已经借阅的书籍
	bool Read_Reader_Bro(); //读取读者已经借阅的书籍
	void Create_Bro_File(); //为每一个读者创建一个保存已借书籍的文件，文件名是帐号
	bool Add_Reader(Reader reader); //增加新读者;
	bool Del_Reader(string num,Reader &reader);
	bool Search_Account_By_past(string password,Reader& reader,int& pos);
};

//账户类
class Login
{
public:
	string Account;  //帐号
	string Password;   //密码
public:
	int CBrush;
	Login()
	{
	    Account=" ";
		Password=" ";
	}
	Login(string account,string password)
	{
		Account=account;
		Password=password;
	}
  virtual ~ Login(){};
};

class CWholeClass  
{
public:
	CWholeClass();
	virtual ~CWholeClass();
public:
	Book_DBase BDase;
	Reader_DBase RDase;
	int account_sum; //当前账户总数
	Login *login;
	Reader Recent_Reader;
public:
	void INit_Login(); //初始化账户
	bool Update_login_file();//更新文件中的账户信息
	bool Search_the_Account(string account,int &pos); //在账户类中搜索帐号，并保存其位置
	bool Search_the_Password(int pos,string password);	//密码匹配
	bool Add_login(Login login);//增加账户
//	bool Check_money(Book book,int month,int date,int year);
};

extern CWholeClass CenterControl;
extern string R_Account;
extern string R_Password;
#endif 