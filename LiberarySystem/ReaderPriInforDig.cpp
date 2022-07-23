// ReaderPriInforDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "ReaderPriInforDig.h"


#include "AllClass.h"
#include "BookSearchBroReDig.h"
#include "BroRecordDig.h"
#include "BookListDig.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderPriInforDig dialog


CReaderPriInforDig::CReaderPriInforDig(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderPriInforDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderPriInforDig)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Reader);
}


void CReaderPriInforDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderPriInforDig)
    DDX_Control(pDX, IDC_READER_PRI_INFOR_LIST, m_reader_list);
	//}}AFX_DATA_MAP
	
}


BEGIN_MESSAGE_MAP(CReaderPriInforDig, CDialog)
	//{{AFX_MSG_MAP(CReaderPriInforDig)
	ON_COMMAND(ID_BRO_RECORD, OnBroRecord)
	ON_COMMAND(ID_CHECK_BOOK, OnCheckBook)
	ON_COMMAND(ID_SEARCH_BRO_RE_BOOK, OnSearchBroReBook)
	ON_COMMAND(ID_SEAR_PRIVATE_INFOR, OnSearPrivateInfor)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderPriInforDig message handlers

BOOL CReaderPriInforDig::OnInitDialog()
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
	CString hd[]={TEXT("姓名"),TEXT("专业"),TEXT("借书证号/账号"),TEXT("密码")};
	for(int i=0;i<4;i++){
	   
	m_reader_list.InsertColumn(i,hd[i],LVCFMT_CENTER,100);
    
	}
	int j;
	CString name,pro,id,password;

	
		j=0;
		name=(CenterControl.Recent_Reader.Get_RName()).c_str();
		pro=(CenterControl.Recent_Reader.Get_RPro()).c_str();
		id=(CenterControl.Recent_Reader.Get_RAccount()).c_str();
		password=(CenterControl.Recent_Reader.Get_RPassword()).c_str();
	m_reader_list.InsertItem(0,_T(""));
	m_reader_list.SetItemText(0,j,name);
	m_reader_list.SetItemText(0,++j,pro);
	m_reader_list.SetItemText(0,++j,id);
	m_reader_list.SetItemText(0,++j,password);



	m_reader_list.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CReaderPriInforDig::OnBroRecord() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBroRecordDig dig;
	dig.DoModal();
}

void CReaderPriInforDig::OnCheckBook() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBookListDig dig;
	dig.DoModal();
}

void CReaderPriInforDig::OnSearchBroReBook() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	    CBookSearchBroReDig dig;
	    dig.DoModal();
}

void CReaderPriInforDig::OnSearPrivateInfor() 
{
	// TODO: Add your command handler code here
	
		this->OnOK();
	CReaderPriInforDig dig;
	dig.DoModal();
}
