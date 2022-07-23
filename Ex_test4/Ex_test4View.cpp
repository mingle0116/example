// Ex_test4View.cpp : implementation of the CEx_test4View class
//

#include "stdafx.h"
#include "Ex_test4.h"

#include "Ex_test4Doc.h"
#include "Ex_test4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx_test4View

IMPLEMENT_DYNCREATE(CEx_test4View, CFormView)

BEGIN_MESSAGE_MAP(CEx_test4View, CFormView)
	//{{AFX_MSG_MAP(CEx_test4View)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEdit)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx_test4View construction/destruction

CEx_test4View::CEx_test4View()
	: CFormView(CEx_test4View::IDD)
{
	//{{AFX_DATA_INIT(CEx_test4View)
	m_CoorY = 0;
	m_CoorX = 0;
	//}}AFX_DATA_INIT
	// TODO: add construction code here
    m_bEditOK=FALSE;

}

CEx_test4View::~CEx_test4View()
{
}

void CEx_test4View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEx_test4View)
	DDX_Control(pDX, IDC_SPIN2, m_SpinY);
	DDX_Control(pDX, IDC_SPIN1, m_SpinX);
	DDX_Text(pDX, IDC_EDIT2, m_CoorY);
	DDX_Text(pDX, IDC_EDIT1, m_CoorX);
	//}}AFX_DATA_MAP
}

BOOL CEx_test4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CEx_test4View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();
  	CEx_test4Doc* pDoc=(CEx_test4Doc*) GetDocument();
   m_CoorX=pDoc->m_ptRect.x;
   m_CoorY=pDoc->m_ptRect.y;
   m_SpinX.SetRange(0,1024);
   m_SpinY.SetRange(0,768);
   UpdateData(FALSE);
   m_bEditOK=TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CEx_test4View printing

BOOL CEx_test4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CEx_test4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CEx_test4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CEx_test4View::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CEx_test4View diagnostics

#ifdef _DEBUG
void CEx_test4View::AssertValid() const
{
	CFormView::AssertValid();
}

void CEx_test4View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CEx_test4Doc* CEx_test4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx_test4Doc)));
	return (CEx_test4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx_test4View message handlers

void CEx_test4View::OnChangeEdit() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CFormView::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	if(!m_bEditOK) return;
	UpdateData(TRUE);
	CEx_test4Doc* pDoc=(CEx_test4Doc*) GetDocument();
	pDoc->m_ptRect.x=m_CoorX;
	pDoc->m_ptRect.y=m_CoorY;
	CPoint pt(m_CoorX,m_CoorY);
	pDoc->UpdateAllViews(NULL,2,(CObject*)&pt);

}

void CEx_test4View::OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint) 
{
	// TODO: Add your specialized code here and/or call the base class
	if(lHint==1){
	  CPoint* pPoint=(CPoint*) pHint;
	  m_CoorX=pPoint->x;
      m_CoorY=pPoint->y;
	  UpdateData(FALSE);
	  CEx_test4Doc* pDoc=(CEx_test4Doc*)GetDocument();
	  pDoc->m_ptRect=*pPoint;
	
	}
	
}
