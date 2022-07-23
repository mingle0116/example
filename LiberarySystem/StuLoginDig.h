#if !defined(AFX_STULOGINDIG_H__319CBA2A_F203_4FB1_9411_32BC9BE89A66__INCLUDED_)
#define AFX_STULOGINDIG_H__319CBA2A_F203_4FB1_9411_32BC9BE89A66__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StuLoginDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStuLoginDig dialog

class CStuLoginDig : public CDialog
{
// Construction
public:
	CStuLoginDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CStuLoginDig)
	enum { IDD = IDD_StuLogin_DIALOG3 };
	CString	m_account;
	CString	m_password;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStuLoginDig)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
     HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CStuLoginDig)
		// NOTE: the ClassWizard will add member functions here
	afx_msg void OnBackButton();
	afx_msg void OnCancelButton2();
	afx_msg void OnLoginButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STULOGINDIG_H__319CBA2A_F203_4FB1_9411_32BC9BE89A66__INCLUDED_)
