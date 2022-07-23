#if !defined(AFX_EDIT_H__FEE56260_4A2F_4A91_87C4_70C6229381E4__INCLUDED_)
#define AFX_EDIT_H__FEE56260_4A2F_4A91_87C4_70C6229381E4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EDit.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CEDit dialog

class CEDit : public CDialog
{
// Construction
public:
	CEDit(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CEDit)
	enum { IDD = IDD_DIALOG2 };
	CEdit	m_edit2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEDit)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CEDit)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDIT_H__FEE56260_4A2F_4A91_87C4_70C6229381E4__INCLUDED_)
