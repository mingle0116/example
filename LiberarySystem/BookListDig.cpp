// BookListDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "BookListDig.h"


#include "BookSearchBroReDig.h"
#include "ReaderPriInforDig.h"
#include "BroRecordDig.h"
#include "AllClass.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookListDig dialog


CBookListDig::CBookListDig(CWnd* pParent /*=NULL*/)
	: CDialog(CBookListDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookListDig)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
		m_hIcon = AfxGetApp()->LoadIcon(IDI_Reader);
}


void CBookListDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookListDig)
		// NOTE: the ClassWizard will add DDX and DDV calls here
    DDX_Control(pDX, IDC_BOOK_LIST, m_book_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookListDig, CDialog)
	//{{AFX_MSG_MAP(CBookListDig)
	ON_COMMAND(ID_BRO_RECORD, OnBroRecord)
	ON_COMMAND(ID_SEAR_PRIVATE_INFOR, OnSearPrivateInfor)
	ON_COMMAND(ID_SEARCH_BRO_RE_BOOK, OnSearchBroReBook)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookListDig message handlers
BOOL CBookListDig::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
     m_Menu.LoadMenu(IDR_MENU1);  
     SetMenu(&m_Menu);

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog	
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

                           
	// TODO: Add extra initialization here
	CString hd[]={TEXT("图书编号"),TEXT("书名"),TEXT("作者"),TEXT("出版社"),TEXT("出版日期"),TEXT("定价"),TEXT("馆藏数")};
	for(int i=0;i<7;i++){
	   
	m_book_list.InsertColumn(i,hd[i],LVCFMT_CENTER,100);
   
	}
	int j;
	CString num,name,author,press,pressDate,price,sum;

	for(int l=0;l<CenterControl.BDase.cur_sum;l++){
	
		j=0;
	
		num=(CenterControl.BDase.books[l].Get_BNum()).c_str();
		name=(CenterControl.BDase.books[l].Get_BName()).c_str();
		author=(CenterControl.BDase.books[l].Get_BAuthor()).c_str();
		press=(CenterControl.BDase.books[l].Get_BPress()).c_str();
		pressDate=(CenterControl.BDase.books[l].Get_BDate()).c_str();
		price.Format("%.2f",CenterControl.BDase.books[l].Get_BPrice());
		sum.Format("%d",CenterControl.BDase.books[l].Get_Sum());
	m_book_list.InsertItem(l,num);
	m_book_list.SetItemText(l,++j,name);
	m_book_list.SetItemText(l,++j,author);
	m_book_list.SetItemText(l,++j,press);
	m_book_list.SetItemText(l,++j,pressDate);
	m_book_list.SetItemText(l,++j,price);
	m_book_list.SetItemText(l,++j,sum);
	}

	m_book_list.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBookListDig::OnBroRecord() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CBroRecordDig dig;
	dig.DoModal();
}



void CBookListDig::OnSearPrivateInfor() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CReaderPriInforDig dig;
	dig.DoModal();
}

void CBookListDig::OnSearchBroReBook() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	    CBookSearchBroReDig dig;
	    dig.DoModal();
}
