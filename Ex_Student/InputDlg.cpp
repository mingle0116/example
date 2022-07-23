// InputDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Ex_Student.h"
#include "InputDlg.h"
#include "TestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CInputDlg dialog


CInputDlg::CInputDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CInputDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInputDlg)
	m_strName = _T("");
	m_strID = _T("");
	m_fScore1 = 0.0f;
	m_fScore2 = 0.0f;
	m_fScore3 = 0.0f;
	//}}AFX_DATA_INIT
}


void CInputDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInputDlg)
	DDX_Text(pDX, IDC_EDIT1, m_strName);
	DDX_Text(pDX, IDC_EDIT2, m_strID);
	DDX_Text(pDX, IDC_EDIT3, m_fScore1);
	DDX_Text(pDX, IDC_EDIT4, m_fScore2);
	DDX_Text(pDX, IDC_EDIT5, m_fScore3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInputDlg, CDialog)
	//{{AFX_MSG_MAP(CInputDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInputDlg message handlers

void CInputDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
    CTestDlg dlg;
	dlg.DoModal();
}
