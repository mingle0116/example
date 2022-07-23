// LoginDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "LoginDig.h"

#include "StuLoginDig.h"
#include "AdminLoginDig.h"
#include "LiberarySystemDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoginDig dialog


CLoginDig::CLoginDig(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoginDig)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Liberary);
}


void CLoginDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoginDig)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLoginDig, CDialog)
	//{{AFX_MSG_MAP(CLoginDig)
	ON_BN_CLICKED(IDC_ADMIN_BUTTON, OnAdminButton)
	ON_BN_CLICKED(IDC_BACK_BUTTON, OnBackButton)
	ON_BN_CLICKED(IDC_STU_BUTTON, OnStuButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginDig message handlers

void CLoginDig::OnAdminButton() 
{
	// TODO: Add your control notification handler code here
		this->OnOK();
	CAdminLoginDig dig;
	dig.DoModal();
}

void CLoginDig::OnBackButton() 
{
	// TODO: Add your control notification handler code here
	this->OnOK();
	CLiberarySystemDlg dig;
	dig.DoModal();
}

void CLoginDig::OnStuButton() 
{
	// TODO: Add your control notification handler code here
		this->OnOK();
	CStuLoginDig dig;
	dig.DoModal();
}
