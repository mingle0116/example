// Ex_InputDlg.h : header file
//

#if !defined(AFX_EX_INPUTDLG_H__63E9012C_AA58_4B6A_97C5_DD048706F614__INCLUDED_)
#define AFX_EX_INPUTDLG_H__63E9012C_AA58_4B6A_97C5_DD048706F614__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////

class CStudentRec{
public:
	CStudentRec(CString name,CString id,float s1,float s2,float s3){
	  strName=name;
	  strID=id;
	  fScore[0]=s1;
	  fScore[1]=s2;
	  fScore[2]=s3;
	}
	CStudentRec(){};
	~CStudentRec(){};


   CString  strName;
   CString  strID;
   float fScore[3];
};
// CEx_InputDlg dialog
class CEx_InputDlg : public CDialog
{
// Construction
public:
	CEx_InputDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEx_InputDlg)
	enum { IDD = IDD_EX_INPUT_DIALOG };
	CSpinButtonCtrl	m_spinS3;
	CSpinButtonCtrl	m_spinS2;
	CSpinButtonCtrl	m_spinS1;
	CListBox	m_ItBox;
	CComboBox	m_cbNo;
	CString	m_strName;
	CString	m_strNo;
	float	m_fScore1;
	float	m_fScore2;
	float	m_fScore3;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_InputDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEx_InputDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonDel();
	afx_msg void OnSelchangeList1();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_INPUTDLG_H__63E9012C_AA58_4B6A_97C5_DD048706F614__INCLUDED_)
