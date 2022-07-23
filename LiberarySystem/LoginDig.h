#if !defined(AFX_LOGINDIG_H__F81B147F_53A0_4C38_AFAF_7BEF4EF1A346__INCLUDED_)
#define AFX_LOGINDIG_H__F81B147F_53A0_4C38_AFAF_7BEF4EF1A346__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoginDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLoginDig dialog

class CLoginDig : public CDialog
{
// Construction
public:
	CLoginDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLoginDig)
	enum { IDD = IDD_Login_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoginDig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CLoginDig)
	afx_msg void OnAdminButton();
	afx_msg void OnBackButton();
	afx_msg void OnStuButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINDIG_H__F81B147F_53A0_4C38_AFAF_7BEF4EF1A346__INCLUDED_)
