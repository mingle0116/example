#if !defined(AFX_ADMINWORK_H__2E72F22E_3E85_4343_B1E4_4E4DC99E14C6__INCLUDED_)
#define AFX_ADMINWORK_H__2E72F22E_3E85_4343_B1E4_4E4DC99E14C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AdminWork.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAdminWork dialog

class CAdminWork : public CDialog
{
// Construction
public:
	CAdminWork(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAdminWork)
	enum { IDD = IDD_AdminManagemetnt_DIALOG10 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdminWork)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CAdminWork)
	afx_msg void OnChecDelAddUpBook();
	afx_msg void OnChecDelAddUpReader();
	afx_msg void OnCheckAllBooks();
	afx_msg void OnCheckAllReader();
	afx_msg void OnBackToFirst();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADMINWORK_H__2E72F22E_3E85_4343_B1E4_4E4DC99E14C6__INCLUDED_)
