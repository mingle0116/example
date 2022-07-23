// Ex_test4View.h : interface of the CEx_test4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX_TEST4VIEW_H__95DC9C39_31A7_4D4F_A777_B1EE2AD10C19__INCLUDED_)
#define AFX_EX_TEST4VIEW_H__95DC9C39_31A7_4D4F_A777_B1EE2AD10C19__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx_test4View : public CFormView
{
protected: // create from serialization only
	CEx_test4View();
	DECLARE_DYNCREATE(CEx_test4View)

public:
	//{{AFX_DATA(CEx_test4View)
	enum { IDD = IDD_EX_TEST4_FORM };
	CSpinButtonCtrl	m_SpinY;
	CSpinButtonCtrl	m_SpinX;
	int		m_CoorY;
	int		m_CoorX;

	//}}AFX_DATA

// Attributes
public:
	CEx_test4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_test4View)
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
	virtual ~CEx_test4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx_test4View)
	afx_msg void OnChangeEdit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Ex_test4View.cpp
inline CEx_test4Doc* CEx_test4View::GetDocument()
   { return (CEx_test4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_TEST4VIEW_H__95DC9C39_31A7_4D4F_A777_B1EE2AD10C19__INCLUDED_)
