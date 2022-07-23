// AdminBookManagement.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "AdminBookManagement.h"

#include "BookList2Dig.h"
#include "AllReaderDig1.h"
#include "AdminReaderManagement.h"
#include "LoginDig.h"
#include "AllClass.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdminBookManagement dialog


CAdminBookManagement::CAdminBookManagement(CWnd* pParent /*=NULL*/)
	: CDialog(CAdminBookManagement::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAdminBookManagement)
	m_book_name = _T("");
	m_bookid = _T("");
	m_author = _T("");
	m_press = _T("");
	m_press_date = _T("");
	m_price = 0.0f;
	m_sum = 0;
	//}}AFX_DATA_INIT
}


void CAdminBookManagement::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAdminBookManagement)
	DDX_Text(pDX, IDC_BOOK_NAME_EDIT1, m_book_name);
	DDX_Text(pDX, IDC_BOOKID_EDIT2, m_bookid);
	DDX_Text(pDX, IDC_AUTHOR_EDIT3, m_author);
	DDX_Text(pDX, IDC_PRESS_EDIT4, m_press);
	DDX_Text(pDX, IDC_DATE_EDIT5, m_press_date);
	DDX_Text(pDX, IDC_PRICE_EDIT6, m_price);
	DDX_Text(pDX, IDC_SUM_EDIT7, m_sum);
	DDV_MinMaxInt(pDX, m_sum, 0, 100);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAdminBookManagement, CDialog)
	//{{AFX_MSG_MAP(CAdminBookManagement)
	ON_COMMAND(ID_CHECK_ALL_READER, OnCheckAllReader)
	ON_COMMAND(ID_CHECK_ALL_BOOKS, OnCheckAllBooks)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_READER, OnChecDelAddUpReader)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_BOOK, OnChecDelAddUpBook)
	ON_BN_CLICKED(IDC_SEARCH_BUTTON1, OnSearchButton1)
	ON_BN_CLICKED(IDC_DEL_BUTTON2, OnDelButton2)
	ON_BN_CLICKED(IDC_ADD_BUTTON3, OnAddButton3)
	ON_COMMAND(ID_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdminBookManagement message handlers

void CAdminBookManagement::OnCheckAllReader() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CAllReaderDig1 dig;
	dig.DoModal();
}

void CAdminBookManagement::OnCheckAllBooks() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CBookList2Dig dig;
	dig.DoModal();
}

void CAdminBookManagement::OnChecDelAddUpReader() 
{
	// TODO: Add your command handler code here
     	this->OnOK();
	CAdminReaderManagement dig;
	dig.DoModal();
	
}

void CAdminBookManagement::OnChecDelAddUpBook() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CAdminBookManagement dig;
	dig.DoModal();
}

void CAdminBookManagement::OnSearchButton1() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	if(m_book_name=="")
		AfxMessageBox("输入你要检索的书籍的名字再按检索键");
	else
	{
		Book book;
		int pos;
		std::string bookname(m_book_name.GetBuffer(0));
		m_book_name.ReleaseBuffer();

		if(CenterControl.BDase.Search_Book(bookname,book,pos))
		{
			AfxMessageBox("搜索成功，该书籍信息显示如下");

			m_bookid.Format("%s",(book.Get_BNum()).c_str());
			m_author.Format("%s",(book.Get_BAuthor()).c_str());
            m_press.Format("%s",(book.Get_BPress()).c_str());
			m_press_date.Format("%s",(book.Get_BDate()).c_str());
			m_price=book.Get_BPrice();
			m_sum=book.Get_Sum();
			UpdateData(FALSE);
		}
		else
			AfxMessageBox("该书不存在书库中");
	}
}

void CAdminBookManagement::OnDelButton2() 
{
	// TODO: Add your control notification handler code here
		UpdateData();

	if(m_book_name=="")
		AfxMessageBox("请先输入你要删除的书籍的名字，再按删除按钮");
	else
	{
		Book book;
		std::string bookname(m_book_name.GetBuffer(0));
		m_book_name.ReleaseBuffer();

		if(CenterControl.BDase.Del_Book(bookname,book))
		{
		    m_book_name="";
			m_bookid="";
			m_author="";
			m_press="";
			m_press_date="";
			m_price=0.0;
			m_sum=0;
			AfxMessageBox("删除成功");
		}
	}
}

void CAdminBookManagement::OnAddButton3() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	if(m_book_name==" " || m_bookid==" " || m_sum==0||m_press==" "||m_author==" "||m_press_date==" "||m_price==0.0)
		AfxMessageBox("请将新书的信息填写完整后，再按添加按钮!");
	else
	{
		std::string bookname(m_book_name.GetBuffer(0));
		m_book_name.ReleaseBuffer();
		
		std::string booknum(m_bookid.GetBuffer(0));
		m_bookid.ReleaseBuffer();

		std::string author(m_author.GetBuffer(0));
		m_author.ReleaseBuffer();

        std::string press(m_press.GetBuffer(0));
		m_press.ReleaseBuffer();

		std::string date(m_press_date.GetBuffer(0));
		m_author.ReleaseBuffer();

        

		
		Book book;
		book.Set_BName(bookname);
		book.Set_BNum(booknum);
		book.Set_BAuthor(author);
		book.Set_BPress(press);
		book.Set_BDate(date);
		book.Set_BPrice(m_price);
		book.Set_BSum(m_sum);

		if(CenterControl.BDase.Add_Book(bookname,book))
		{
			AfxMessageBox("添加成功");
		}
	}
}

void CAdminBookManagement::OnExit() 
{
	// TODO: Add your command handler code here
		int id=MessageBox("是否退出系统？","提示",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
             exit(0);
		}
}
