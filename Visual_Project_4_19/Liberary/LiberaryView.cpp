// LiberaryView.cpp : implementation of the CLiberaryView class
//

#include "stdafx.h"
#include "Liberary.h"

#include "LiberaryDoc.h"
#include "LiberaryView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLiberaryView

IMPLEMENT_DYNCREATE(CLiberaryView, CView)

BEGIN_MESSAGE_MAP(CLiberaryView, CView)
	//{{AFX_MSG_MAP(CLiberaryView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiberaryView construction/destruction

CLiberaryView::CLiberaryView()
{
	// TODO: add construction code here

}

CLiberaryView::~CLiberaryView()
{
}

BOOL CLiberaryView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLiberaryView drawing

void CLiberaryView::OnDraw(CDC* pDC)
{
	CLiberaryDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLiberaryView printing

BOOL CLiberaryView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLiberaryView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLiberaryView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CLiberaryView diagnostics

#ifdef _DEBUG
void CLiberaryView::AssertValid() const
{
	CView::AssertValid();
}

void CLiberaryView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLiberaryDoc* CLiberaryView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLiberaryDoc)));
	return (CLiberaryDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLiberaryView message handlers
