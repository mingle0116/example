// AdminWork.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "LiberarySystemDlg.h"
#include "AdminWork.h"

#include "BookList2Dig.h"
#include "AllReaderDig1.h"
#include "AdminReaderManagement.h"
#include "AdminBookManagement.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdminWork dialog


CAdminWork::CAdminWork(CWnd* pParent /*=NULL*/)
	: CDialog(CAdminWork::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAdminWork)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDI_Admin);
}


void CAdminWork::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAdminWork)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAdminWork, CDialog)
	//{{AFX_MSG_MAP(CAdminWork)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_BOOK, OnChecDelAddUpBook)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_READER, OnChecDelAddUpReader)
	ON_COMMAND(ID_CHECK_ALL_BOOKS, OnCheckAllBooks)
	ON_COMMAND(ID_CHECK_ALL_READER, OnCheckAllReader)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdminWork message handlers

void CAdminWork::OnChecDelAddUpBook() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CAdminBookManagement dig;
	dig.DoModal();
}

void CAdminWork::OnChecDelAddUpReader() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CAdminReaderManagement dig;
	dig.DoModal();
}

void CAdminWork::OnCheckAllBooks() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CBookList2Dig dig;
	dig.DoModal();
}

void CAdminWork::OnCheckAllReader() 
{
	// TODO: Add your command handler code here
		this->OnOK();
	CAllReaderDig1 dig;
	dig.DoModal();
}

void CAdminWork::OnBackToFirst() 
{
	// TODO: Add your command handler code here
	int id=MessageBox("是否返回登陆首页？","提示",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
   CLiberarySystemDlg dig;
	dig.DoModal();
		}

}
