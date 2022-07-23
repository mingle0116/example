// LiberarySystemDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "LiberarySystemDlg.h"
#include "AllClass.h"

#include "LoginDig.h"
#include "RegisterDig.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemDlg dialog

CLiberarySystemDlg::CLiberarySystemDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLiberarySystemDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLiberarySystemDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Liberary);
}

void CLiberarySystemDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLiberarySystemDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CLiberarySystemDlg, CDialog)
	//{{AFX_MSG_MAP(CLiberarySystemDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	ON_BN_CLICKED(IDC_LOGIN, OnLogin)
	ON_BN_CLICKED(IDC_SIGNIN, OnSignin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemDlg message handlers

BOOL CLiberarySystemDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.


	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	CenterControl.BDase.Init_BookDabse();
	CenterControl.RDase.Init_ReaderDbase();
    CenterControl.INit_Login();
	CenterControl.RDase.Create_Bro_File();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CLiberarySystemDlg::OnPaint() 
{  
	CPaintDC dc(this);
	if (IsIconic())
	{
		 // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CLiberarySystemDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CLiberarySystemDlg::OnExit() 
{
	// TODO: Add your control notification handler code here
		int id=MessageBox("是否退出系统？","提示",MB_OKCANCEL|MB_ICONQUESTION);
	if(id==IDOK){
	   exit(0);
	
	}
}

void CLiberarySystemDlg::OnLogin() 
{
	// TODO: Add your control notification handler code here
	this->OnOK();
	CLoginDig dig;
	dig.DoModal();
}

void CLiberarySystemDlg::OnSignin() 
{
	// TODO: Add your control notification handler code here
	this->OnOK();
	CRegisterDig dig;
    dig.DoModal();
}
