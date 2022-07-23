// Ex_ResearchDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Ex_Research.h"
#include "Ex_ResearchDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx_ResearchDlg dialog

CEx_ResearchDlg::CEx_ResearchDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEx_ResearchDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEx_ResearchDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEx_ResearchDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEx_ResearchDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CEx_ResearchDlg, CDialog)
	//{{AFX_MSG_MAP(CEx_ResearchDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx_ResearchDlg message handlers

BOOL CEx_ResearchDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
    CheckRadioButton(IDC_AGE_L18,IDC_AGE_M38,IDC_AGE_18T27);
	CheckRadioButton(IDC_CM_FTTL,IDC_CM_OTHER,IDC_CM_FTTL);
	CButton*pBm=(CButton*)GetDlgItem(IDC_DO_POP);
	pBm->SetCheck(1);
    
    CheckRadioButton(IDC_TIME_L1,IDC_TIME_M3,IDC_TIME_L1);


	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CEx_ResearchDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEx_ResearchDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

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
HCURSOR CEx_ResearchDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CEx_ResearchDlg::OnOK() 
{
	// TODO: Add extra validation here
	CString str,strCtrl;
	//获取第一个问题的用户选择
	str="你的年龄：";
	UINT nID=GetCheckedRadioButton(IDC_AGE_L18,IDC_AGE_M38);
	GetDlgItemText(nID,strCtrl);
	str=str+strCtrl;

	//获取第二个问题的用户选择
	str=str+"\n你使用的接入方式：";
	nID=GetCheckedRadioButton(IDC_CM_FTTL,IDC_CM_OTHER);
	GetDlgItemText(nID,strCtrl);
	str=str+strCtrl;
	//获取第三个问题的用户选择
	str=str+"\n你上网主要是:\n";
	UINT nCheckIDs[4]={IDC_DO_POP,IDC_DO_READ,IDC_DO_GAME,IDC_DO_OTHER};
	CButton* pBtn;
	for(int i=0;i<4;i++){
      pBtn=(CButton*)GetDlgItem(nCheckIDs[i]);
	  if(pBtn->GetCheck()){
	     pBtn->GetWindowText(strCtrl);
		 str=str+strCtrl;
		 str=str+" ";

	  }


	}
	//获取第四个问题的用户选择
	str =str +"\n你每天平均上网的时间： \n";
	nID=GetCheckedRadioButton(IDC_TIME_L1,IDC_TIME_M3);
	GetDlgItemText(nID,strCtrl);
	str=str+strCtrl;
	

	MessageBox(str);
	CDialog::OnOK();
}
