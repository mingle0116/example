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
	string Book_name; //����
	string Book_num;  //���
	string Book_author;//����
	string Book_press;//������
	string Book_date;//��������
	string Book_brodate;//����ʱ��
	float Book_price;//����
	int Sum;  //�ݲ�����
public:
	Book();
    virtual	~Book(){};
	string Get_BName(); //��������
	string Get_BNum();  //���ر��
	string Get_BAuthor();
    string Get_BPress();
	string Get_BDate();
	string  Get_BroDate(); //Date
	float  Get_BPrice();
	int    Get_Sum();    //���عݲ�����
	void Set_BName(string name);  //��������
	void Set_BNum(string num);   //���ñ��
	void Set_BAuthor(string author);
	void Set_BPress(string press);
	void Set_BDate(string date);
	void Set_BroDate(string date);
	void Set_BPrice(float price);
	void Set_BSum(int sum);  //���ô���
	bool Bro_Book();   //����
	void Re_Book();   //����
	void Add_Book(int num); //��Ӹ��������
	Book &operator = (const Book &book); //����=�����
};

#define BOOK_MAX_SUM 100  //���ɴ洢��������������

class Book_DBase
{
public:
	unsigned int max_sum;  //�����������
	unsigned int cur_sum;  //��ǰ�������
	Book *books; //���
public:
	Book_DBase();
    virtual	~ Book_DBase(){};
	bool Search_Book(string name,Book &book,int &pos);  //�����������ָ���������鼮
	bool Search_Book_By_num(string booknum,Book &book,int &pos);
	bool Add_Book(string name,Book book);  //����鼮
	bool Del_Book(string name,Book &book);  //ɾ���鼮
	bool Init_BookDabse();  //��ʼ�����
	void Write_into_file();  //�������Ϣд���ļ�
	void Update_Info_Book(Book book); //���������ָ�������Ϣ
};

#define Max_Bro 10

class Reader
{
private:
	string Reader_name;   //��������
	string Reader_num;    //ѧ��/���
	string Reader_pro;    //רҵ
	string Reader_account;   //��¼�ʺ�
	string Reader_password;       //��¼����
	int Cur_sum;        //�ѽ��鱾����
public:
	Book Bro_books[Max_Bro];    //��������
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
	bool Search_in_Bro(string name,Book &book,int &pos);  //���ѽ��ĵ���������ָ���������鼮
    bool Search_in_Bronum(string booknum,Book &book,int &pos);
	bool Bro_Book(Book book);      //����
	bool Re_Book(Book &book);      //����
	Reader &operator = (Reader &reader); //����=�����
};

#define MAX_READER_NUM 100 //���߿�ɰ����Ķ�������

class Reader_DBase
{
public:
	int max_sum; //��������
	int cur_sum; //��ǰ��������
	Reader *readers; //���߿�
public:
	Reader_DBase();
	virtual ~ Reader_DBase(){};
	bool Search_Reader(string num,Reader &reader,int &pos);  
	bool Search_Account(string account,Reader& reader,int& pos);  
	bool Init_ReaderDbase();  //��ʼ�����߿�
	bool Write_into_file();   //�����߿���Ϣд���ļ�
	bool Save_Reader_Bro(); //ͨ���ļ���������Ѿ����ĵ��鼮
	bool Read_Reader_Bro(); //��ȡ�����Ѿ����ĵ��鼮
	void Create_Bro_File(); //Ϊÿһ�����ߴ���һ�������ѽ��鼮���ļ����ļ������ʺ�
	bool Add_Reader(Reader reader); //�����¶���;
	bool Del_Reader(string num,Reader &reader);
	bool Search_Account_By_past(string password,Reader& reader,int& pos);
};

//�˻���
class Login
{
public:
	string Account;  //�ʺ�
	string Password;   //����
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
	int account_sum; //��ǰ�˻�����
	Login *login;
	Reader Recent_Reader;
public:
	void INit_Login(); //��ʼ���˻�
	bool Update_login_file();//�����ļ��е��˻���Ϣ
	bool Search_the_Account(string account,int &pos); //���˻����������ʺţ���������λ��
	bool Search_the_Password(int pos,string password);	//����ƥ��
	bool Add_login(Login login);//�����˻�
//	bool Check_money(Book book,int month,int date,int year);
};

extern CWholeClass CenterControl;
extern string R_Account;
extern string R_Password;
#endif 