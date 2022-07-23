#if !defined(AFX_BRORECORDDIG_H__C5D7E6EF_9174_4ECE_AF83_088E6EACF37D__INCLUDED_)
#define AFX_BRORECORDDIG_H__C5D7E6EF_9174_4ECE_AF83_088E6EACF37D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BroRecordDig.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBroRecordDig dialog

class CBroRecordDig : public CDialog
{
// Construction
public:
	CBroRecordDig(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBroRecordDig)
	enum { IDD = IDD_BroRecord_DIALOG9 };
	CListCtrl	m_bro_record;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBroRecordDig)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(CBroRecordDig)
	virtual BOOL OnInitDialog();
	afx_msg void OnCheckBook();
	afx_msg void OnSearPrivateInfor();
	afx_msg void OnSearchBroReBook();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BRORECORDDIG_H__C5D7E6EF_9174_4ECE_AF83_088E6EACF37D__INCLUDED_)
