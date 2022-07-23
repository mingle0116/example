// Ex_test4.h : main header file for the EX_TEST4 application
//

#if !defined(AFX_EX_TEST4_H__2A7AF8A0_EF7D_453F_8BBA_F86A4AF72EBD__INCLUDED_)
#define AFX_EX_TEST4_H__2A7AF8A0_EF7D_453F_8BBA_F86A4AF72EBD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CEx_test4App:
// See Ex_test4.cpp for the implementation of this class
//

class CEx_test4App : public CWinApp
{
public:
	CEx_test4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_test4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CEx_test4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_TEST4_H__2A7AF8A0_EF7D_453F_8BBA_F86A4AF72EBD__INCLUDED_)
