#if !defined(AFX_BOOKLIST2DIG_H__7BFBD648_F6D0_4F0F_9124_545F1C743CC6__INCLUDED_)
#define AFX_BOOKLIST2DIG_H__7BFBD648_F6D0_4F0F_9124_545F1C743CC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookList2Dig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookList2Dig dialog

class CBookList2Dig : public CDialog
{
// Construction
public:
	CBookList2Dig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookList2Dig)
	enum { IDD = IDD_BookList2_DIALOG12 };
	CListCtrl	m_book_list2;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookList2Dig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CBookList2Dig)
	virtual BOOL OnInitDialog();
	afx_msg void OnChecDelAddUpBook();
	afx_msg void OnChecDelAddUpReader();
	afx_msg void OnCheckAllBooks();
	afx_msg void OnCheckAllReader();
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKLIST2DIG_H__7BFBD648_F6D0_4F0F_9124_545F1C743CC6__INCLUDED_)
