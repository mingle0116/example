#if !defined(AFX_BOOKSEARCHBROREDIG_H__C60EE16B_AFB1_4EB1_8F0E_E6738C860665__INCLUDED_)
#define AFX_BOOKSEARCHBROREDIG_H__C60EE16B_AFB1_4EB1_8F0E_E6738C860665__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookSearchBroReDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookSearchBroReDig dialog

class CBookSearchBroReDig : public CDialog
{
// Construction
public:
	CBookSearchBroReDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookSearchBroReDig)
	enum { IDD = IDD_SearBroReBook_DIALOG8 };
	CString	m_search_name;
	CString	m_book_name;
	CString	m_bookid;
	int		m_booksum;
	CString	m_month;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookSearchBroReDig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
      HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CBookSearchBroReDig)
	  virtual BOOL OnInitDialog();
	afx_msg void OnCheckBook();
	afx_msg void OnSearPrivateInfor();
	afx_msg void OnReturnButton3();
	afx_msg void OnBroButton2();
	afx_msg void OnSearchButton1();
	afx_msg void OnBroRecord();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKSEARCHBROREDIG_H__C60EE16B_AFB1_4EB1_8F0E_E6738C860665__INCLUDED_)
