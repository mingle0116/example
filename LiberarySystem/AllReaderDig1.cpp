// AllReaderDig1.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "LiberarySystemDlg.h"
#include "AllReaderDig1.h"

#include "AllClass.h"
#include "BookList2Dig.h"
#include "AllReaderDig1.h"
#include "AdminReaderManagement.h"
#include "AdminBookManagement.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAllReaderDig1 dialog


CAllReaderDig1::CAllReaderDig1(CWnd* pParent /*=NULL*/)
	: CDialog(CAllReaderDig1::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAllReaderDig1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Admin);
}


void CAllReaderDig1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAllReaderDig1)
	DDX_Control(pDX, IDC_ALL_READER_LIST1, m_all_reader_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAllReaderDig1, CDialog)
	//{{AFX_MSG_MAP(CAllReaderDig1)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_BOOK, OnChecDelAddUpBook)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_READER, OnChecDelAddUpReader)
	ON_COMMAND(ID_CHECK_ALL_BOOKS, OnCheckAllBooks)
	ON_COMMAND(ID_CHECK_ALL_READER, OnCheckAllReader)
	ON_COMMAND(ID_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAllReaderDig1 message handlers

BOOL CAllReaderDig1::OnInitDialog()
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
 	CString hd[]={TEXT("姓名"),TEXT("专业"),TEXT("借书证号"),TEXT("借阅图书/日期")};
 	for(int i=0;i<4;i++){
 	   
 	m_all_reader_list.InsertColumn(i,hd[i],LVCFMT_CENTER,100);
     
 	}
 	int j;
 	CString name,pro,id,bro;
 
	for (int l=0;l<CenterControl.RDase.cur_sum;l++){
 		j=0;
	
 		name=(CenterControl.RDase.readers[l].Get_RName()).c_str();
 		pro=(CenterControl.RDase.readers[l].Get_RPro()).c_str();
 		id=(CenterControl.RDase.readers[l].Get_RAccount()).c_str();
		for(int k=0;k<CenterControl.RDase.readers[l].Get_Cur_Sum();k++){
		bro.Format("%s|%s/%s",bro,CenterControl.RDase.readers[l].Bro_books[k].Get_BName(),CenterControl.RDase.readers[l].Bro_books[k].Get_BroDate());
		}
	
		m_all_reader_list.InsertItem(l,name);

 	m_all_reader_list.SetItemText(l,++j,pro);
 	m_all_reader_list.SetItemText(l,++j,id);
    m_all_reader_list.SetItemText(l,++j,bro);
 
 	}
 	m_all_reader_list.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
 	return TRUE;  // return TRUE  unless you set the focus to a control
 }

void CAllReaderDig1::OnChecDelAddUpBook() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CAdminBookManagement dig;
	dig.DoModal();
}

void CAllReaderDig1::OnChecDelAddUpReader() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CAdminReaderManagement dig;
	dig.DoModal();
}

void CAllReaderDig1::OnCheckAllBooks() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBookList2Dig dig;
	dig.DoModal();
}

void CAllReaderDig1::OnCheckAllReader() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CAllReaderDig1 dig;
	dig.DoModal();
}



void CAllReaderDig1::OnExit() 
{
	// TODO: Add your command handler code here
		int id=MessageBox("是否退出系统？","提示",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
                 exit(0);
		}
}
