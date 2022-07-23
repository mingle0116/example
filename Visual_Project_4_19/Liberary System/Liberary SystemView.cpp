// Liberary SystemView.cpp : implementation of the CLiberarySystemView class
//

#include "stdafx.h"
#include "Liberary System.h"

#include "Liberary SystemDoc.h"
#include "Liberary SystemView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemView

IMPLEMENT_DYNCREATE(CLiberarySystemView, CView)

BEGIN_MESSAGE_MAP(CLiberarySystemView, CView)
	//{{AFX_MSG_MAP(CLiberarySystemView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemView construction/destruction

CLiberarySystemView::CLiberarySystemView()
{
	// TODO: add construction code here

}

CLiberarySystemView::~CLiberarySystemView()
{
}

BOOL CLiberarySystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemView drawing

void CLiberarySystemView::OnDraw(CDC* pDC)
{
	CLiberarySystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemView printing

BOOL CLiberarySystemView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLiberarySystemView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLiberarySystemView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemView diagnostics

#ifdef _DEBUG
void CLiberarySystemView::AssertValid() const
{
	CView::AssertValid();
}

void CLiberarySystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLiberarySystemDoc* CLiberarySystemView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLiberarySystemDoc)));
	return (CLiberarySystemDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemView message handlers
