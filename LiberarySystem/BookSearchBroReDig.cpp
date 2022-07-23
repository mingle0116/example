// BookSearchBroReDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "BookSearchBroReDig.h"

#include "AllClass.h"
#include "BookListDig.h"
#include "ReaderPriInforDig.h"
#include "BroRecordDig.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookSearchBroReDig dialog


CBookSearchBroReDig::CBookSearchBroReDig(CWnd* pParent /*=NULL*/)
	: CDialog(CBookSearchBroReDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookSearchBroReDig)
	m_search_name = _T("");
	m_book_name = _T("");
	m_bookid = _T("");
	m_booksum = 0;
	m_month = _T("");
	//}}AFX_DATA_INIT
}


void CBookSearchBroReDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookSearchBroReDig)
    DDX_Text(pDX, IDC_SEARCH_BOOK_NAME_EDIT1, m_search_name);
	DDX_Text(pDX, IDC_BOOK_NAME_EDIT2, m_book_name);
	DDX_Text(pDX, IDC_BOOKID_EDIT2, m_bookid);
	DDX_Text(pDX, IDC_SUM_EDIT3, m_booksum);
	DDX_Text(pDX, IDC_Month_EDIT5, m_month);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookSearchBroReDig, CDialog)
	//{{AFX_MSG_MAP(CBookSearchBroReDig)
	ON_COMMAND(ID_CHECK_BOOK, OnCheckBook)
	ON_COMMAND(ID_SEAR_PRIVATE_INFOR, OnSearPrivateInfor)
	ON_BN_CLICKED(IDC_RETURN_BUTTON3, OnReturnButton3)
	ON_BN_CLICKED(IDC_BRO_BUTTON2, OnBroButton2)
	ON_BN_CLICKED(IDC_SEARCH_BUTTON1, OnSearchButton1)
	ON_COMMAND(ID_BRO_RECORD, OnBroRecord)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookSearchBroReDig message handlers

BOOL CBookSearchBroReDig::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
    CMenu* menu =new CMenu;

    menu->LoadMenu(MAKEINTRESOURCE(IDR_MENU1));   

    this->SetMenu(menu);

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Reader);	
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

                           
	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}



void CBookSearchBroReDig::OnCheckBook() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CBookListDig dig;
	dig.DoModal();
}

void CBookSearchBroReDig::OnSearPrivateInfor() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CReaderPriInforDig dig;
	dig.DoModal();
}

void CBookSearchBroReDig::OnReturnButton3() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	if(m_book_name==""||m_month=="")
		AfxMessageBox("�������鼮��Ϣ����������Ҫ�黹��������ֺ͹黹ʱ�䣬�ٰ��黹��ť");
	else
	{
		std::string bookname(m_book_name.GetBuffer(0));
		m_book_name.ReleaseBuffer();
		

		int pos;
		Book book;
		if(CenterControl.Recent_Reader.Search_in_Bro(bookname,book,pos))
		{
		

			//if(CenterControl.Check_money(book,m_month,m_date,m_year)){	
			  
				//	if(CenterControl.Recent_Reader.Re_Book(book))
					//{
						if(CenterControl.RDase.Save_Reader_Bro())
							AfxMessageBox("�黹�ɹ�");
			                  UpdateData(FALSE);
						//	}      

		//	}

			//	else{   
			  
			           
			   //	AfxMessageBox("�黹���޳���30���뵽ǰ̨�黹�鱾");
			//	}
		}
	}
}

void CBookSearchBroReDig::OnBroButton2() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	if((m_book_name==""||m_bookid=="") || m_bookid=="" || m_booksum==0||m_month=="")
		AfxMessageBox("���Ȳ�����Ҫ���ĵ��鼮���֣�Ȼ����ʱ��ո�����ʱ�䣨�£��գ��꣩�ٰ����İ�ť");
	else
	{
		Book book;
        int pos;
		std::string bookname(m_book_name.GetBuffer(0));
		m_book_name.ReleaseBuffer();
     
        
    	std::string date(m_month.GetBuffer(0));
     	m_month.ReleaseBuffer();

      if(CenterControl.BDase.Search_Book(bookname,book,pos))
	  {        book.Set_BroDate(date);
			if(CenterControl.Recent_Reader.Bro_Book(book))
			{      
				if(CenterControl.RDase.Save_Reader_Bro())
				{	AfxMessageBox("���ĳɹ�");
					m_booksum--;
					UpdateData(FALSE);
				}   
	  }	   }
	}
}

void CBookSearchBroReDig::OnSearchButton1() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	if(m_search_name==""&&m_bookid=="")
		AfxMessageBox("����������Ҫ���ҵ�������ֻ��߱�ţ��ٰ����Ұ�ť");
	else
	{
		Book book;
		int pos;
		std::string bookname(m_search_name.GetBuffer(0));
		m_search_name.ReleaseBuffer();
        
		std::string booknum(m_bookid.GetBuffer(0));
	    m_bookid.ReleaseBuffer();

		if(CenterControl.BDase.Search_Book(bookname,book,pos)||CenterControl.BDase.Search_Book_By_num(booknum,book,pos))
		{
			AfxMessageBox("�����ɹ���������Ϣ���·��鼮��Ϣ��");
			m_book_name.Format("%s",(book.Get_BName()).c_str());
			m_bookid.Format("%s",(book.Get_BNum()).c_str());
			m_booksum=book.Get_Sum();
			UpdateData(FALSE);
		}
		else
			AfxMessageBox("�������鼮������");
	}
}

void CBookSearchBroReDig::OnBroRecord() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBroRecordDig dig;
	dig.DoModal();
}
