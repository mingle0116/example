// RegisterDig.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "LiberarySystemDlg.h"
#include "RegisterDig.h"
#include "AllClass.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRegisterDig dialog


CRegisterDig::CRegisterDig(CWnd* pParent /*=NULL*/)
	: CDialog(CRegisterDig::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRegisterDig)
		// NOTE: the ClassWizard will add member initialization here
	m_account = _T("");
	m_password = _T("");
	m_commit_password = _T("");
	m_major = _T("");
	m_name = _T("");
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Liberary);	
}


void CRegisterDig::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRegisterDig)
		// NOTE: the ClassWizard will add DDX and DDV calls here
    DDX_Text(pDX, IDC_ACCOUNT_EDIT1, m_account);
	DDX_Text(pDX, IDC_PASSWORD_EDIT2, m_password);
	DDX_Text(pDX, IDC_COMMIT_EDIT3, m_commit_password);
	DDX_Text(pDX, IDC_MAJOR_EDIT1, m_major);
	DDX_Text(pDX, IDC_NAME_EDIT2, m_name);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRegisterDig, CDialog)
	//{{AFX_MSG_MAP(CRegisterDig)
		// NOTE: the ClassWizard will add message map macros here
    ON_BN_CLICKED(IDC_CANCEL_BUTTON2, OnCancelButton2)
	ON_BN_CLICKED(IDC_BACK_BUTTON, OnBackButton)
	ON_BN_CLICKED(IDC_SIGNIN_BUTTON1, OnSigninButton1)
		//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRegisterDig message handlers
void CRegisterDig::OnCancelButton2() 
{
	// TODO: Add your control notification handler code here
	int id=MessageBox("是否取消注册？","提示",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
		    m_account="";
			m_password="";
			m_commit_password="";
			UpdateData(FALSE);
		}
}

void CRegisterDig::OnBackButton() 
{
	// TODO: Add your control notification handler code here
	this->OnOK();
	CLiberarySystemDlg dig;
	dig.DoModal();
}

void CRegisterDig::OnSigninButton1() 
{
	// TODO: Add your control notification handler code here
	UpdateData();

	if(m_account=="" || m_password=="" || m_commit_password==""|| m_major==""|| m_name=="")
		AfxMessageBox("请先填完整");
	else
	{
		std::string account(m_account.GetBuffer(0));
		m_account.ReleaseBuffer();

		int pos;
		if(CenterControl.Search_the_Account(account,pos))
			AfxMessageBox("该帐号已被注册");
		else
		{
			if(m_password!=m_commit_password)
				AfxMessageBox("两次输入的密码不一致！");
			else
			{
				Login login;
				std::string password(m_password.GetBuffer(0));
				m_password.ReleaseBuffer();

				login.Account=account;
				login.Password=password;
				
				R_Account=account;
				R_Password=password;
				
				if(CenterControl.Add_login(login))
				{   
                    Reader reader;
						std::string name(m_name.GetBuffer(0));
						m_name.ReleaseBuffer();
        
						std::string pro(m_major.GetBuffer(0));
						m_major.ReleaseBuffer();

						reader.Set_RAccount(R_Account);
						reader.Set_RPassword(R_Password);
						reader.Set_RName(name);
						reader.Set_RNum(R_Account);
						reader.Set_RPro(pro);
						reader.Set_RCur_Sum();
						if(CenterControl.RDase.Add_Reader(reader))
							{
								AfxMessageBox("恭喜你已经注册成功，祝你使用愉快！！！");
								this->OnOK();
								CLiberarySystemDlg dig;
								dig.DoModal();

							}
				}
			}
		}
	}
}

BOOL CRegisterDig::PreTranslateMessage(MSG* pMsg) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message==WM_KEYDOWN)
	{
		if(pMsg->wParam==VK_RETURN)
		{
			if(GetFocus()->GetDlgCtrlID()==IDC_ACCOUNT_EDIT1 || GetFocus()->GetDlgCtrlID()==IDC_PASSWORD_EDIT2 ||GetFocus()->GetDlgCtrlID()==IDC_COMMIT_EDIT3|| GetFocus()->GetDlgCtrlID()==IDC_MAJOR_EDIT1|| GetFocus()->GetDlgCtrlID()==IDC_NAME_EDIT2)
			{
				return true;
			}
		}
	}
	
	return CDialog::PreTranslateMessage(pMsg);
}
											