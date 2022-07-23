// Draw.cpp : implementation file
//

#include "stdafx.h"
#include "Ex_Rec.h"
#include "Draw.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDraw

IMPLEMENT_DYNCREATE(CDraw, CView)

CDraw::CDraw()
{
}

CDraw::~CDraw()
{
}


BEGIN_MESSAGE_MAP(CDraw, CView)
	//{{AFX_MSG_MAP(CDraw)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDraw drawing

void CDraw::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
	CRect rc(m_ptDraw.x-5,m_ptDraw.y-5,m_ptDraw.x+5,m_ptDraw.y+5);
	pDC->Rectangle(rc);
}

/////////////////////////////////////////////////////////////////////////////
// CDraw diagnostics

#ifdef _DEBUG
void CDraw::AssertValid() const
{
	CView::AssertValid();
}

void CDraw::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDraw message handlers

void CDraw::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	CEx_RecDoc* pDoc=(CEx_RecDoc*) m_pDocument;
	m_ptDraw =pDoc->m_ptRect;

}

void CDraw::OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	if(lHint==2){
	  CPoint* pPoint=(CPoint *) pHint ;
	  m_ptDraw=* pPoint;
	  Invalidate();
	 
	}
}

void CDraw::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	 m_ptDraw=point;
	 GetDocument()->UpdateAllViews(NULL,1,(CObject*)&m_ptDraw);
	 Invalidate();


	CView::OnLButtonDown(nFlags, point);
}
