// Ex_Rec.h : main header file for the EX_REC application
//

#if !defined(AFX_EX_REC_H__0D673EB3_DEC7_4376_996C_AFF45EB46529__INCLUDED_)
#define AFX_EX_REC_H__0D673EB3_DEC7_4376_996C_AFF45EB46529__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CEx_RecApp:
// See Ex_Rec.cpp for the implementation of this class
//

class CEx_RecApp : public CWinApp
{
public:
	CEx_RecApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_RecApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CEx_RecApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_REC_H__0D673EB3_DEC7_4376_996C_AFF45EB46529__INCLUDED_)
