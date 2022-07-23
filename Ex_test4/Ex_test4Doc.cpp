// Ex_test4Doc.cpp : implementation of the CEx_test4Doc class
//

#include "stdafx.h"
#include "Ex_test4.h"

#include "Ex_test4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx_test4Doc

IMPLEMENT_DYNCREATE(CEx_test4Doc, CDocument)

BEGIN_MESSAGE_MAP(CEx_test4Doc, CDocument)
	//{{AFX_MSG_MAP(CEx_test4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx_test4Doc construction/destruction

CEx_test4Doc::CEx_test4Doc()
{
	// TODO: add one-time construction code here
    m_ptRect.x=m_ptRect.y=0;
}

CEx_test4Doc::~CEx_test4Doc()
{
}

BOOL CEx_test4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx_test4Doc serialization

void CEx_test4Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CEx_test4Doc diagnostics

#ifdef _DEBUG
void CEx_test4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx_test4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx_test4Doc commands
