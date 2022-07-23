// BookList2Dig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "BookList2Dig.h"

#include "AllReaderDig1.h"
#include "AdminReaderManagement.h"
#include "AdminBookManagement.h"
#include "LiberarySystemDlg.h"
#include "AllClass.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBookList2Dig dialog


CBookList2Dig::CBookList2Dig(CWnd* pParent /*=NULL*/)
	: CDialog(CBookList2Dig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBookList2Dig)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBookList2Dig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBookList2Dig)
	DDX_Control(pDX, IDC_BOOK_LIST2, m_book_list2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBookList2Dig, CDialog)
	//{{AFX_MSG_MAP(CBookList2Dig)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_BOOK, OnChecDelAddUpBook)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_READER, OnChecDelAddUpReader)
	ON_COMMAND(ID_CHECK_ALL_BOOKS, OnCheckAllBooks)
	ON_COMMAND(ID_CHECK_ALL_READER, OnCheckAllReader)
	ON_COMMAND(ID_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBookList2Dig message handlers

BOOL CBookList2Dig::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
    

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Admin);	
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

                           
	// TODO: Add extra initialization here
	CString hd[]={TEXT("图书编号"),TEXT("书名"),TEXT("作者"),TEXT("出版社"),TEXT("出版日期"),TEXT("定价"),TEXT("馆藏数")};
	for(int i=0;i<7;i++){
	   
	m_book_list2.InsertColumn(i,hd[i],LVCFMT_CENTER,100);
   
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

	m_book_list2.InsertItem(l,num);
	m_book_list2.SetItemText(l,++j,name);
	m_book_list2.SetItemText(l,++j,author);
	m_book_list2.SetItemText(l,++j,press);
	m_book_list2.SetItemText(l,++j,pressDate);
	m_book_list2.SetItemText(l,++j,price);
	m_book_list2.SetItemText(l,++j,sum);
	}

	m_book_list2.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBookList2Dig::OnChecDelAddUpBook() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CAdminBookManagement dig;
	dig.DoModal();
}

void CBookList2Dig::OnChecDelAddUpReader() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CAdminReaderManagement dig;
	dig.DoModal();
}

void CBookList2Dig::OnCheckAllBooks() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBookList2Dig dig;
	dig.DoModal();
}

void CBookList2Dig::OnCheckAllReader() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CAllReaderDig1 dig;
	dig.DoModal();
}


void CBookList2Dig::OnExit() 
{
	// TODO: Add your command handler code here
		int id=MessageBox("是否退出系统？","提示",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
                 exit(0);
		}
}
