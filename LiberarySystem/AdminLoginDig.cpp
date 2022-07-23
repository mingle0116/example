// AdminLoginDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "AdminLoginDig.h"

#include "AdminWork.h"
#include "LoginDig.h"
#include "LiberarySystemDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdminLoginDig dialog


CAdminLoginDig::CAdminLoginDig(CWnd* pParent /*=NULL*/)
	: CDialog(CAdminLoginDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAdminLoginDig)
    m_account = _T("");
	m_password = _T("");
	//}}AFX_DATA_INIT
}


void CAdminLoginDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAdminLoginDig)
    DDX_Text(pDX, IDC_ACCOUNT_EDIT1, m_account);
	DDX_Text(pDX, IDC_PASSWORD_EDIT2, m_password);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAdminLoginDig, CDialog)
	//{{AFX_MSG_MAP(CAdminLoginDig)
	ON_BN_CLICKED(IDC_CANCEL_BUTTON2, OnCancelButton2)
	ON_BN_CLICKED(IDC_BACK_BUTTON, OnBackButton)
	ON_BN_CLICKED(IDC_LOGIN_BUTTON1, OnLoginButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdminLoginDig message handlers
void CAdminLoginDig::OnCancelButton2() 
{
	// TODO: Add your control notification handler code here
		int id=MessageBox("�Ƿ�ȡ����¼��","��ʾ",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
		    m_account="";
			m_password="";
		
			UpdateData(FALSE);
		}
}

void CAdminLoginDig::OnBackButton() 
{
	// TODO: Add your control notification handler code here
	this->OnOK();
	CLoginDig dig;
	dig.DoModal();
}

void CAdminLoginDig::OnLoginButton1() 
{
	// TODO: Add your control notification handler code here

  UpdateData();
	if(m_account=="" || m_password=="")
	AfxMessageBox("����д����");
	else
	{
		if(m_account=="MingChen")
		{
			if(m_password=="123456")
			{
				AfxMessageBox("��½�ɹ�");
		     	this->OnOK();
         	    CAdminWork dig;
            	dig.DoModal();
			}
			else
				AfxMessageBox("�������");
		}
		else
		{
			AfxMessageBox("����Ա�ʺ���Ч");
		}
	}	
}


BOOL CAdminLoginDig::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	if(pMsg->message==WM_KEYDOWN)
	{
		if(pMsg->wParam==VK_RETURN)
		{
			if(GetFocus()->GetDlgCtrlID()==IDC_ACCOUNT_EDIT1 || GetFocus()->GetDlgCtrlID()==IDC_PASSWORD_EDIT2)
			{
				CAdminLoginDig::OnLoginButton1();
				return true;
			}
		}
	}
	return CDialog::PreTranslateMessage(pMsg);
}
