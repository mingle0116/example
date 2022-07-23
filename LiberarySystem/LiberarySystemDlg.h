// LiberarySystemDlg.h : header file
//

#if !defined(AFX_LIBERARYSYSTEMDLG_H__2CCB8105_C7E4_421A_9B36_7C1C34DD501D__INCLUDED_)
#define AFX_LIBERARYSYSTEMDLG_H__2CCB8105_C7E4_421A_9B36_7C1C34DD501D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemDlg dialog

class CLiberarySystemDlg : public CDialog
{
// Construction
public:
	CLiberarySystemDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CLiberarySystemDlg)
	enum { IDD = IDD_LIBERARYSYSTEM_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiberarySystemDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLiberarySystemDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExit();
	afx_msg void OnLogin();
	afx_msg void OnSignin();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBERARYSYSTEMDLG_H__2CCB8105_C7E4_421A_9B36_7C1C34DD501D__INCLUDED_)
