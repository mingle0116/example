#if !defined(AFX_BOOKLISTDIG_H__2B4926EB_3399_44E5_9E55_23BBFFB17C12__INCLUDED_)
#define AFX_BOOKLISTDIG_H__2B4926EB_3399_44E5_9E55_23BBFFB17C12__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookListDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookListDig dialog

class CBookListDig : public CDialog
{
// Construction
public:
	CBookListDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookListDig)
	enum { IDD = IDD_ReaderBookList_DIALOG5 };
	CListCtrl	m_book_list;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookListDig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
     HICON m_hIcon;
	 CMenu m_Menu;
	// Generated message map functions
	//{{AFX_MSG(CBookListDig)
	virtual BOOL OnInitDialog();
	afx_msg void OnBroRecord();
	afx_msg void OnCheckBook();
	afx_msg void OnSearPrivateInfor();
	afx_msg void OnSearchBroReBook();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKLISTDIG_H__2B4926EB_3399_44E5_9E55_23BBFFB17C12__INCLUDED_)
