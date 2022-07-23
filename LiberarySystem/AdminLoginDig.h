#if !defined(AFX_ADMINLOGINDIG_H__622B8E4C_9184_4F22_B016_88D1DBC6966A__INCLUDED_)
#define AFX_ADMINLOGINDIG_H__622B8E4C_9184_4F22_B016_88D1DBC6966A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AdminLoginDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAdminLoginDig dialog

class CAdminLoginDig : public CDialog
{
// Construction
public:
	CAdminLoginDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAdminLoginDig)
	enum { IDD = IDD_AdminLogin_DIALOG6 };
	CString	m_account;
	CString	m_password;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdminLoginDig)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    
	// Generated message map functions
	//{{AFX_MSG(CAdminLoginDig)
		// NOTE: the ClassWizard will add member functions here
	afx_msg void OnCancelButton2();
	afx_msg void OnBackButton();
	afx_msg void OnLoginButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADMINLOGINDIG_H__622B8E4C_9184_4F22_B016_88D1DBC6966A__INCLUDED_)
