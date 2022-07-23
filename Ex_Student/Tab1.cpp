// Tab1.cpp : implementation file
//

#include "stdafx.h"
#include "Ex_Student.h"
#include "Tab1.h"
#include "EDit.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTab1 dialog


CTab1::CTab1(CWnd* pParent /*=NULL*/)
	: CDialog(CTab1::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTab1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
    CEDit ce;
	m_tab.AddPage(TEXT("dd"),&ce,IDD_DIALOG2);
}


void CTab1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTab1)
	DDX_Control(pDX, IDC_TAB1, m_tab);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTab1, CDialog)
	//{{AFX_MSG_MAP(CTab1)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, OnSelchangeTab1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTab1 message handlers

void CTab1::OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	
	*pResult = 0;

}
