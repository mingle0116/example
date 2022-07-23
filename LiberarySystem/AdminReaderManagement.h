#if !defined(AFX_ADMINREADERMANAGEMENT_H__92F7A481_3F55_4580_9BEF_4AFA984C6E2B__INCLUDED_)
#define AFX_ADMINREADERMANAGEMENT_H__92F7A481_3F55_4580_9BEF_4AFA984C6E2B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AdminReaderManagement.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAdminReaderManagement dialog

class CAdminReaderManagement : public CDialog
{
// Construction
public:
	CAdminReaderManagement(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAdminReaderManagement)
	enum { IDD = IDD_ReaderManagement_DIALOG14 };
	CString	m_name;
	CString	m_id;
	CString	m_password;
	CString	m_bro_date;
	CString	m_pro;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdminReaderManagement)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAdminReaderManagement)
	afx_msg void OnChecDelAddUpBook();
	afx_msg void OnChecDelAddUpReader();
	afx_msg void OnCheckAllBooks();
	afx_msg void OnCheckAllReader();
	afx_msg void OnUpdateButton2();
	afx_msg void OnDelButton3();
	afx_msg void OnAddButton4();
	afx_msg void OnSearchReaderButton5();
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADMINREADERMANAGEMENT_H__92F7A481_3F55_4580_9BEF_4AFA984C6E2B__INCLUDED_)
