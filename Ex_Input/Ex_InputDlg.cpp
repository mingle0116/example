// Ex_InputDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Ex_Input.h"
#include "Ex_InputDlg.h"

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
// CEx_InputDlg dialog

CEx_InputDlg::CEx_InputDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEx_InputDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEx_InputDlg)
	m_strName = _T("");
	m_strNo = _T("");
	m_fScore1 = 0.0f;
	m_fScore2 = 0.0f;
	m_fScore3 = 0.0f;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEx_InputDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEx_InputDlg)
	DDX_Control(pDX, IDC_SPIN_S3, m_spinS3);
	DDX_Control(pDX, IDC_SPIN_S2, m_spinS2);
	DDX_Control(pDX, IDC_SPIN_S1, m_spinS1);
	DDX_Control(pDX, IDC_LIST1, m_ItBox);
	DDX_Control(pDX, IDC_COMBO_NO, m_cbNo);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strName);
	DDX_CBString(pDX, IDC_COMBO_NO, m_strNo);
	DDX_Text(pDX, IDC_EDIT_S1, m_fScore1);
	DDX_Text(pDX, IDC_EDIT_S2, m_fScore2);
	DDX_Text(pDX, IDC_EDIT_S3, m_fScore3);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CEx_InputDlg, CDialog)
	//{{AFX_MSG_MAP(CEx_InputDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_DEL, OnButtonDel)
	ON_LBN_SELCHANGE(IDC_LIST1, OnSelchangeList1)
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx_InputDlg message handlers

BOOL CEx_InputDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_spinS1.SetRange(0,100);
	m_spinS2.SetRange(0,100);
	m_spinS3.SetRange(0,100);
	//设置组合框
	CString str;
	for(int i=1;i<=50;i++){
	   str.Format("210501%02d",i);
	   m_cbNo.InsertString(i-1,str);
	  
	}
	m_cbNo.SetCurSel(0);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CEx_InputDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CEx_InputDlg::OnPaint() 
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
HCURSOR CEx_InputDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CEx_InputDlg::OnButtonAdd() 
{
	// TODO: Add your control notification handler code here
	
	UpdateData();
	m_strName.TrimLeft();
	m_strName.TrimRight();
	if(m_strName.IsEmpty())
	{
	   MessageBox("姓名不能为空!","提示");
	   return;
	}
	CString str;
	str.Format("%15s%10s%6.1f%6.1f%6.1f",m_strName,m_strNo, m_fScore1,m_fScore2,m_fScore3);
	CStudentRec *rec=new CStudentRec(m_strName,m_strNo, m_fScore1,m_fScore2,m_fScore3);
	int nIndex=m_ItBox.AddString(str);
	m_ItBox.SetItemDataPtr(nIndex,rec);

}

void CEx_InputDlg::OnButtonDel() 
{
	// TODO: Add your control notification handler code here
		int nIndex=m_ItBox.GetCurSel();
	if(nIndex!=LB_ERR){

	   delete(CStudentRec*)m_ItBox.GetItemDataPtr(nIndex);
	   m_ItBox.DeleteString(nIndex);
	
	}
	else{
	
	   GetDlgItem(IDC_BUTTON_DEL)->EnableWindow(FALSE);
	}
}

void CEx_InputDlg::OnSelchangeList1() 
{
	// TODO: Add your control notification handler code here
		int nIndex=m_ItBox.GetCurSel();
	if(nIndex!=LB_ERR)
	{
		GetDlgItem(IDC_BUTTON_DEL)->EnableWindow(TRUE);
		CStudentRec data;
		data=*(CStudentRec*)m_ItBox.GetItemDataPtr(nIndex);
		m_strName=data.strName;
		m_strNo=data.strID;
		m_fScore1=data.fScore[0];
		m_fScore2=data.fScore[1];
		m_fScore3=data.fScore[2];
		UpdateData(FALSE);

	}
	else{
	
	   GetDlgItem(IDC_BUTTON_DEL)->EnableWindow(FALSE);

	}
}

void CEx_InputDlg::OnDestroy() 
{
	CDialog::OnDestroy();
	
	// TODO: Add your message handler code here
		for(int nIndex=m_ItBox.GetCount()-1;nIndex>=0;nIndex--)
	{
	   delete (CStudentRec*) m_ItBox.GetItemDataPtr(nIndex);
	
	}
}
