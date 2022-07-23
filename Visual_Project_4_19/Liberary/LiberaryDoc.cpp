// LiberaryDoc.cpp : implementation of the CLiberaryDoc class
//

#include "stdafx.h"
#include "Liberary.h"

#include "LiberaryDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLiberaryDoc

IMPLEMENT_DYNCREATE(CLiberaryDoc, CDocument)

BEGIN_MESSAGE_MAP(CLiberaryDoc, CDocument)
	//{{AFX_MSG_MAP(CLiberaryDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiberaryDoc construction/destruction

CLiberaryDoc::CLiberaryDoc()
{
	// TODO: add one-time construction code here

}

CLiberaryDoc::~CLiberaryDoc()
{
}

BOOL CLiberaryDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CLiberaryDoc serialization

void CLiberaryDoc::Serialize(CArchive& ar)
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
// CLiberaryDoc diagnostics

#ifdef _DEBUG
void CLiberaryDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLiberaryDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLiberaryDoc commands
