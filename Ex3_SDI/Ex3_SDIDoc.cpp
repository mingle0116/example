// Ex3_SDIDoc.cpp : implementation of the CEx3_SDIDoc class
//

#include "stdafx.h"
#include "Ex3_SDI.h"

#include "Ex3_SDIDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIDoc

IMPLEMENT_DYNCREATE(CEx3_SDIDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx3_SDIDoc, CDocument)
	//{{AFX_MSG_MAP(CEx3_SDIDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIDoc construction/destruction

CEx3_SDIDoc::CEx3_SDIDoc()
{
	// TODO: add one-time construction code here

}

CEx3_SDIDoc::~CEx3_SDIDoc()
{
}

BOOL CEx3_SDIDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIDoc serialization

void CEx3_SDIDoc::Serialize(CArchive& ar)
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
// CEx3_SDIDoc diagnostics

#ifdef _DEBUG
void CEx3_SDIDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx3_SDIDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx3_SDIDoc commands
