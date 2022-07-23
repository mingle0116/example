#if !defined(AFX_READERPRIINFORDIG_H__C7D900F0_95F8_4C82_8D47_AE46A485A758__INCLUDED_)
#define AFX_READERPRIINFORDIG_H__C7D900F0_95F8_4C82_8D47_AE46A485A758__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderPriInforDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderPriInforDig dialog

class CReaderPriInforDig : public CDialog
{
// Construction
public:
	CReaderPriInforDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderPriInforDig)
	enum { IDD = IDD_ReaderPriInfor_DIALOG7 };
    CListCtrl	m_reader_list;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderPriInforDig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CReaderPriInforDig)
	virtual BOOL OnInitDialog();
	afx_msg void OnBroRecord();
	afx_msg void OnCheckBook();
	afx_msg void OnSearchBroReBook();
	afx_msg void OnSearPrivateInfor();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERPRIINFORDIG_H__C7D900F0_95F8_4C82_8D47_AE46A485A758__INCLUDED_)
