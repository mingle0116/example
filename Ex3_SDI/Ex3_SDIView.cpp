// Ex3_SDIView.cpp : implementation of the CEx3_SDIView class
//

#include "stdafx.h"
#include "Ex3_SDI.h"

#include "Ex3_SDIDoc.h"
#include "Ex3_SDIView.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIView

IMPLEMENT_DYNCREATE(CEx3_SDIView, CView)

BEGIN_MESSAGE_MAP(CEx3_SDIView, CView)
	//{{AFX_MSG_MAP(CEx3_SDIView)
	ON_WM_LBUTTONDBLCLK()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIView construction/destruction

CEx3_SDIView::CEx3_SDIView()
{
	// TODO: add construction code here

}

CEx3_SDIView::~CEx3_SDIView()
{
}

BOOL CEx3_SDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIView drawing

void CEx3_SDIView::OnDraw(CDC* pDC)
{
	CEx3_SDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIView printing

BOOL CEx3_SDIView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CEx3_SDIView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CEx3_SDIView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIView diagnostics

#ifdef _DEBUG
void CEx3_SDIView::AssertValid() const
{
	CView::AssertValid();
}

void CEx3_SDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx3_SDIDoc* CEx3_SDIView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx3_SDIDoc)));
	return (CEx3_SDIDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIView message handlers

void CEx3_SDIView::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMainFrame* pFrame=(CMainFrame*) AfxGetApp()->m_pMainWnd;
	CStatusBar* pStatus=&pFrame->m_wndStatusBar;
	CString str;
	if(pFrame->m_blsTest){
	
	  str.Format("ÄãÔÚ(%d,%d)´¦Ë«»÷Êó±ê",point.x,point.y);

	}
	else{
	   str.Empty();

	}

	if(pStatus){

	   pStatus->SetPaneText(1,str);
	
	}
	CView::OnLButtonDblClk(nFlags, point);
}
