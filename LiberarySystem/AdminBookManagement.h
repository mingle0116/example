#if !defined(AFX_ADMINBOOKMANAGEMENT_H__BF2A79AB_CFFF_4E4D_8070_A5F44C322A76__INCLUDED_)
#define AFX_ADMINBOOKMANAGEMENT_H__BF2A79AB_CFFF_4E4D_8070_A5F44C322A76__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AdminBookManagement.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAdminBookManagement dialog

class CAdminBookManagement : public CDialog
{
// Construction
public:
	CAdminBookManagement(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAdminBookManagement)
	enum { IDD = IDD_BookManagement_DIALOG11 };
	CString	m_book_name;
	CString	m_bookid;
	CString	m_author;
	CString	m_press;
	CString	m_press_date;
	float	m_price;
	int		m_sum;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAdminBookManagement)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAdminBookManagement)
	afx_msg void OnCheckAllReader();
	afx_msg void OnCheckAllBooks();
	afx_msg void OnChecDelAddUpReader();
	afx_msg void OnChecDelAddUpBook();
	afx_msg void OnSearchButton1();
	afx_msg void OnDelButton2();
	afx_msg void OnAddButton3();
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADMINBOOKMANAGEMENT_H__BF2A79AB_CFFF_4E4D_8070_A5F44C322A76__INCLUDED_)
