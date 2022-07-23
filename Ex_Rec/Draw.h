#if !defined(AFX_DRAW_H__F3628F00_8265_4E2A_8BEC_EC25D37C887A__INCLUDED_)
#define AFX_DRAW_H__F3628F00_8265_4E2A_8BEC_EC25D37C887A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
//#include "Ex_Rec.h"
#include "Draw.h"
#include "Ex_RecDoc.h"
#endif // _MSC_VER > 1000
// Draw.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDraw view

class CDraw : public CView
{
protected:
	CDraw();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CDraw)

// Attributes
public:

// Operations
public:
	CPoint m_ptDraw;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDraw)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CDraw();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CDraw)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAW_H__F3628F00_8265_4E2A_8BEC_EC25D37C887A__INCLUDED_)
