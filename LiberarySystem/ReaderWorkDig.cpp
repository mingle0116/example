// ReaderWorkDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "ReaderWorkDig.h"
#include "AllClass.h"

#include "BookListDig.h"
#include "BookSearchBroReDig.h"
#include "ReaderPriInforDig.h"
#include "BroRecordDig.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderWorkDig dialog


CReaderWorkDig::CReaderWorkDig(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderWorkDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderWorkDig)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Reader);
}


void CReaderWorkDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderWorkDig)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderWorkDig, CDialog)
	//{{AFX_MSG_MAP(CReaderWorkDig)
	ON_COMMAND(ID_CHECK_BOOK, OnCheckBook)
	ON_COMMAND(ID_SEAR_PRIVATE_INFOR, OnSearPrivateInfor)
	ON_COMMAND(ID_BRO_RECORD, OnBroRecord)
	ON_COMMAND(ID_SEARCH_BRO_RE_BOOK, OnSearchBroReBook)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderWorkDig message handlers
BOOL CReaderWorkDig::OnInitDialog()
{
	CDialog::OnInitDialog();


    m_Menu.LoadMenu(IDR_MENU1);  
    SetMenu(&m_Menu);

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon


	// TODO: Add extra initialization here
	int pos=0;
	CenterControl.RDase.Search_Account(R_Account,CenterControl.Recent_Reader,pos);
	CenterControl.RDase.Read_Reader_Bro();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CReaderWorkDig::OnCheckBook() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CBookListDig dig;
	dig.DoModal();
}

void CReaderWorkDig::OnSearPrivateInfor() 
{
	// TODO: Add your command handler code here
			this->OnOK();
	CReaderPriInforDig dig;
	dig.DoModal();
}

void CReaderWorkDig::OnBroRecord() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBroRecordDig dig;
	dig.DoModal();
}

void CReaderWorkDig::OnSearchBroReBook() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	    CBookSearchBroReDig dig;
	    dig.DoModal();
}
