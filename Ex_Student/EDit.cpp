// EDit.cpp : implementation file
//

#include "stdafx.h"
#include "Ex_Student.h"
#include "EDit.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEDit dialog


CEDit::CEDit(CWnd* pParent /*=NULL*/)
	: CDialog(CEDit::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEDit)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CEDit::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEDit)
	DDX_Control(pDX, IDC_EDIT2, m_edit2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CEDit, CDialog)
	//{{AFX_MSG_MAP(CEDit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEDit message handlers

//DEL BOOL CEDit::OnCommand(WPARAM wParam, LPARAM lParam) 
//DEL {
//DEL 	// TODO: Add your specialized code here and/or call the base class
//DEL 	
//DEL 	return CDialog::OnCommand(wParam, lParam);
//DEL }

void CEDit::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::CalcWindowRect(lpClientRect, nAdjustType);
}

