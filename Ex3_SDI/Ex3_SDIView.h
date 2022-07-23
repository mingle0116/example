// Ex3_SDIView.h : interface of the CEx3_SDIView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX3_SDIVIEW_H__F6C9F83F_DAC9_4F24_BA14_66A5155D66E3__INCLUDED_)
#define AFX_EX3_SDIVIEW_H__F6C9F83F_DAC9_4F24_BA14_66A5155D66E3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx3_SDIView : public CView
{
protected: // create from serialization only
	CEx3_SDIView();
	DECLARE_DYNCREATE(CEx3_SDIView)

// Attributes
public:
	CEx3_SDIDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx3_SDIView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEx3_SDIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx3_SDIView)
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Ex3_SDIView.cpp
inline CEx3_SDIDoc* CEx3_SDIView::GetDocument()
   { return (CEx3_SDIDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX3_SDIVIEW_H__F6C9F83F_DAC9_4F24_BA14_66A5155D66E3__INCLUDED_)
