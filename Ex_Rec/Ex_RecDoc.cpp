// Ex_RecDoc.cpp : implementation of the CEx_RecDoc class
//

#include "stdafx.h"
#include "Ex_Rec.h"

#include "Ex_RecDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx_RecDoc

IMPLEMENT_DYNCREATE(CEx_RecDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx_RecDoc, CDocument)
	//{{AFX_MSG_MAP(CEx_RecDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx_RecDoc construction/destruction

CEx_RecDoc::CEx_RecDoc()
{
	// TODO: add one-time construction code here
    m_ptRect.x=m_ptRect.y=0;
}

CEx_RecDoc::~CEx_RecDoc()
{
}

BOOL CEx_RecDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx_RecDoc serialization

void CEx_RecDoc::Serialize(CArchive& ar)
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
// CEx_RecDoc diagnostics

#ifdef _DEBUG
void CEx_RecDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx_RecDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx_RecDoc commands
