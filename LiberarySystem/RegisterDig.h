#if !defined(AFX_REGISTERDIG_H__F870014D_7A1E_4EAB_B1A6_90E49F9F5210__INCLUDED_)
#define AFX_REGISTERDIG_H__F870014D_7A1E_4EAB_B1A6_90E49F9F5210__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RegisterDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRegisterDig dialog

class CRegisterDig : public CDialog
{
// Construction
public:
	CRegisterDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRegisterDig)
	enum { IDD = IDD_Register_DIALOG1 };
	CString	m_account;
	CString	m_password;
	CString	m_commit_password;
	CString	m_major;
	CString	m_name;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRegisterDig)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CRegisterDig)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	afx_msg void OnCancelButton2();
	afx_msg void OnBackButton();
	afx_msg void OnSigninButton1();
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REGISTERDIG_H__F870014D_7A1E_4EAB_B1A6_90E49F9F5210__INCLUDED_)
