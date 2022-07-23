// StuLoginDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "StuLoginDig.h"

#include "LoginDig.h"
#include "ReaderWorkDig.h"
#include "AllClass.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStuLoginDig dialog


CStuLoginDig::CStuLoginDig(CWnd* pParent /*=NULL*/)
	: CDialog(CStuLoginDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStuLoginDig)
		m_account = _T("");
	    m_password = _T("");
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Liberary);
}


void CStuLoginDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStuLoginDig)		
	DDX_Text(pDX, IDC_ACCOUNT_EDIT1, m_account);
	DDX_Text(pDX, IDC_PASSWORD_EDIT2, m_password);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CStuLoginDig, CDialog)
	//{{AFX_MSG_MAP(CStuLoginDig)
    ON_BN_CLICKED(IDC_BACK_BUTTON, OnBackButton)
	ON_BN_CLICKED(IDC_CANCEL_BUTTON2, OnCancelButton2)
	ON_BN_CLICKED(IDC_LOGIN_BUTTON1, OnLoginButton1)
		//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStuLoginDig message handlers
void CStuLoginDig::OnBackButton() 
{
	// TODO: Add your control notification handler code here
	this->OnOK();
	CLoginDig dig;
	dig.DoModal();
}

void CStuLoginDig::OnCancelButton2() 
{
	// TODO: Add your control notification handler code here
		int id=MessageBox("是否取消登录？","提示",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
		    m_account="";
			m_password="";
		
			UpdateData(FALSE);
		}
}

void CStuLoginDig::OnLoginButton1() 
{
	// TODO: Add your control notification handler code here

    UpdateData();
	if(m_account=="" || m_password=="")
		AfxMessageBox("请填写完整");
	else	
	{
		Reader reader;
		std::string account(m_account.GetBuffer(0));
		m_account.ReleaseBuffer();
		int pos;
		if(CenterControl.RDase.Search_Account(account,reader,pos))
		{
			CenterControl.Search_the_Account(account,pos);
			R_Account=account;
			std::string password(m_password.GetBuffer(0));
			m_password.ReleaseBuffer();
			if(CenterControl.Search_the_Password(pos,password))
				{
					R_Password=password;	
					AfxMessageBox("登陆成功");
			    	this->OnOK();
             	    CReaderWorkDig dig;
             	    dig.DoModal();
				}
			else
			{
					AfxMessageBox("密码错误");
			}

		}

		else{
				AfxMessageBox("帐号不存在");
			}
	}

}

BOOL CStuLoginDig::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class

	if(pMsg->message==WM_KEYDOWN)
	{
		if(pMsg->wParam==VK_RETURN)
		{
			if(GetFocus()->GetDlgCtrlID()==IDC_ACCOUNT_EDIT1 || GetFocus()->GetDlgCtrlID()==IDC_PASSWORD_EDIT2)
			{
				CStuLoginDig::OnLoginButton1();
				return true;
			}
		}
	}
	
	return CDialog::PreTranslateMessage(pMsg);
}
