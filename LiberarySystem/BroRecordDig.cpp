// BroRecordDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "BroRecordDig.h"

#include "AllClass.h"
#include "BookListDig.h"
#include "BookSearchBroReDig.h"
#include "ReaderPriInforDig.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBroRecordDig dialog


CBroRecordDig::CBroRecordDig(CWnd* pParent /*=NULL*/)
	: CDialog(CBroRecordDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBroRecordDig)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBroRecordDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBroRecordDig)
	DDX_Control(pDX, IDC_BRO_RECORD_LIST, m_bro_record);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBroRecordDig, CDialog)
	//{{AFX_MSG_MAP(CBroRecordDig)
	ON_COMMAND(ID_CHECK_BOOK, OnCheckBook)
	ON_COMMAND(ID_SEAR_PRIVATE_INFOR, OnSearPrivateInfor)
	ON_COMMAND(ID_SEARCH_BRO_RE_BOOK, OnSearchBroReBook)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBroRecordDig message handlers

BOOL CBroRecordDig::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.
	 CMenu* menu =new CMenu;

    menu->LoadMenu(MAKEINTRESOURCE(IDR_MENU1));   

    this->SetMenu(menu);

	// IDM_ABOUTBOX must be in the system command range.
    

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Reader);	
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

                           
	// TODO: Add extra initialization here
	CString hd[]={TEXT("借阅者姓名"),TEXT("书名"),TEXT("作者"),TEXT("借书日期"),TEXT("书的价格")};
	for(int i=0;i<5;i++)
	{
	   
	m_bro_record.InsertColumn(i,hd[i],LVCFMT_CENTER,160);
   
	}

	CString name,bookname,author,date,price;


for(int l=0;l<CenterControl.Recent_Reader.Get_Cur_Sum();l++){
    

		name=(CenterControl.Recent_Reader.Get_RName()).c_str();
		bookname=(CenterControl.Recent_Reader.Bro_books[l].Get_BName()).c_str();
		author=(CenterControl.Recent_Reader.Bro_books[l].Get_BAuthor()).c_str();
		date=(CenterControl.Recent_Reader.Bro_books[l].Get_BroDate()).c_str();
        price.Format("%.2f",(CenterControl.Recent_Reader.Bro_books[l].Get_BPrice()));
       
	
	    m_bro_record.InsertItem(l,name);


	m_bro_record.SetItemText(l,1,bookname);
	m_bro_record.SetItemText(l,2,author);
	m_bro_record.SetItemText(l,3,date);
	m_bro_record.SetItemText(l,4,price);

	}

	m_bro_record.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBroRecordDig::OnCheckBook() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBookListDig dig;
	dig.DoModal();
}

void CBroRecordDig::OnSearPrivateInfor() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CReaderPriInforDig dig;
	dig.DoModal();
}

void CBroRecordDig::OnSearchBroReBook() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	    CBookSearchBroReDig dig;
	    dig.DoModal();
}
