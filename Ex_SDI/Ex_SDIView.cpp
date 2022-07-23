// Ex_SDIView.cpp : implementation of the CEx_SDIView class
//

#include "stdafx.h"
#include "Ex_SDI.h"

#include "Ex_SDIDoc.h"
#include "Ex_SDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx_SDIView

IMPLEMENT_DYNCREATE(CEx_SDIView, CView)

BEGIN_MESSAGE_MAP(CEx_SDIView, CView)
	//{{AFX_MSG_MAP(CEx_SDIView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx_SDIView construction/destruction

CEx_SDIView::CEx_SDIView()
{
	// TODO: add construction code here
    m_nLButton=m_nRButton=0;
}

CEx_SDIView::~CEx_SDIView()
{
}

BOOL CEx_SDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx_SDIView drawing

void CEx_SDIView::OnDraw(CDC* pDC)
{
	CEx_SDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CEx_SDIView diagnostics

#ifdef _DEBUG
void CEx_SDIView::AssertValid() const
{
	CView::AssertValid();
}

void CEx_SDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx_SDIDoc* CEx_SDIView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx_SDIDoc)));
	return (CEx_SDIDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx_SDIView message handlers

void CEx_SDIView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	//��������m_nLButton��1,Ȼ��������ʱ��
	m_nLButton++;
	SetTimer(1,50,NULL);

	CView::OnLButtonDown(nFlags, point);
}

void CEx_SDIView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_nRButton++;
	SetTimer(2,50,NULL);
	CView::OnRButtonDown(nFlags, point);
}

void CEx_SDIView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CString str;
	if(nIDEvent==1){
         str.Format("���ѵ���������%d�Σ�",m_nLButton);
	}
	if(nIDEvent==2){
	     str.Format("���ѵ�������Ҽ�%d�Σ�",m_nRButton);
	}
	if((nIDEvent==1)||(nIDEvent==2)){
	   KillTimer(nIDEvent);
	   MessageBox(str,"����");
	}
	CView::OnTimer(nIDEvent);
}
