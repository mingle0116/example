// LiberaryView.h : interface of the CLiberaryView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBERARYVIEW_H__C4714E4C_C2B0_4F61_B7D8_9EBB0799E46C__INCLUDED_)
#define AFX_LIBERARYVIEW_H__C4714E4C_C2B0_4F61_B7D8_9EBB0799E46C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLiberaryView : public CView
{
protected: // create from serialization only
	CLiberaryView();
	DECLARE_DYNCREATE(CLiberaryView)

// Attributes
public:
	CLiberaryDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiberaryView)
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
	virtual ~CLiberaryView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLiberaryView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in LiberaryView.cpp
inline CLiberaryDoc* CLiberaryView::GetDocument()
   { return (CLiberaryDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBERARYVIEW_H__C4714E4C_C2B0_4F61_B7D8_9EBB0799E46C__INCLUDED_)
