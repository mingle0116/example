// Ex_RecView.h : interface of the CEx_RecView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX_RECVIEW_H__551D33A5_9959_41B7_A070_537F29CB78FD__INCLUDED_)
#define AFX_EX_RECVIEW_H__551D33A5_9959_41B7_A070_537F29CB78FD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CEx_RecDoc;
class CEx_RecView : public CFormView
{
protected: // create from serialization only
	CEx_RecView();
	DECLARE_DYNCREATE(CEx_RecView)

public:
	//{{AFX_DATA(CEx_RecView)
	enum { IDD = IDD_EX_REC_FORM };
	CSpinButtonCtrl	m_SpinY;
	CSpinButtonCtrl	m_SpinX;
	int		m_CoorX;
	int		m_CoorY;
	//}}AFX_DATA

// Attributes
public:
	CEx_RecDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_RecView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
public:
	BOOL m_bEditOK;
	virtual ~CEx_RecView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx_RecView)
	afx_msg void OnChangeEdit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Ex_RecView.cpp
inline CEx_RecDoc* CEx_RecView::GetDocument()
   { return (CEx_RecDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_RECVIEW_H__551D33A5_9959_41B7_A070_537F29CB78FD__INCLUDED_)
