#if !defined(AFX_ALLREADERDIG1_H__962D1490_6420_4827_858E_1E54010DBEBE__INCLUDED_)
#define AFX_ALLREADERDIG1_H__962D1490_6420_4827_858E_1E54010DBEBE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AllReaderDig1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAllReaderDig1 dialog

class CAllReaderDig1 : public CDialog
{
// Construction
public:
	CAllReaderDig1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAllReaderDig1)
	enum { IDD = IDD_AllReaderList_DIALOG13 };
	CListCtrl	m_all_reader_list;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAllReaderDig1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CAllReaderDig1)
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

#endif // !defined(AFX_ALLREADERDIG1_H__962D1490_6420_4827_858E_1E54010DBEBE__INCLUDED_)
