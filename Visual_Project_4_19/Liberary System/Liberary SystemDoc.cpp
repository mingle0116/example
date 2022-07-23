// Liberary SystemDoc.cpp : implementation of the CLiberarySystemDoc class
//

#include "stdafx.h"
#include "Liberary System.h"

#include "Liberary SystemDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemDoc

IMPLEMENT_DYNCREATE(CLiberarySystemDoc, CDocument)

BEGIN_MESSAGE_MAP(CLiberarySystemDoc, CDocument)
	//{{AFX_MSG_MAP(CLiberarySystemDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemDoc construction/destruction

CLiberarySystemDoc::CLiberarySystemDoc()
{
	// TODO: add one-time construction code here

}

CLiberarySystemDoc::~CLiberarySystemDoc()
{
}

BOOL CLiberarySystemDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemDoc serialization

void CLiberarySystemDoc::Serialize(CArchive& ar)
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
// CLiberarySystemDoc diagnostics

#ifdef _DEBUG
void CLiberarySystemDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLiberarySystemDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemDoc commands
