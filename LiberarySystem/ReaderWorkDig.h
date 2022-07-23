#if !defined(AFX_READERWORKDIG_H__FBA08320_AB5B_4260_8537_F396ED204075__INCLUDED_)
#define AFX_READERWORKDIG_H__FBA08320_AB5B_4260_8537_F396ED204075__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderWorkDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderWorkDig dialog

class CReaderWorkDig : public CDialog
{
// Construction
public:
	CReaderWorkDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderWorkDig)
	enum { IDD = IDD_ReaderWorkShip_DIALOG4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderWorkDig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	CMenu m_Menu;
	// Generated message map functions
	//{{AFX_MSG(CReaderWorkDig)
    virtual BOOL OnInitDialog();
	afx_msg void OnCheckBook();
	afx_msg void OnSearPrivateInfor();
	afx_msg void OnBroRecord();
	afx_msg void OnSearchBroReBook();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERWORKDIG_H__FBA08320_AB5B_4260_8537_F396ED204075__INCLUDED_)
