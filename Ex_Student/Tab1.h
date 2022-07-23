#if !defined(AFX_TAB1_H__51D0DFDB_1D61_4B95_8C30_56E2E144F581__INCLUDED_)
#define AFX_TAB1_H__51D0DFDB_1D61_4B95_8C30_56E2E144F581__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Tab1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTab1 dialog

class CTab1 : public CDialog
{
// Construction
public:
	CTab1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTab1)
	enum { IDD = IDD_CHANGE };
	CTabCtrl	m_tab;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTab1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTab1)
	afx_msg void OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TAB1_H__51D0DFDB_1D61_4B95_8C30_56E2E144F581__INCLUDED_)
