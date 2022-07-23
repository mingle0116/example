// Liberary System.h : main header file for the LIBERARY SYSTEM application
//

#if !defined(AFX_LIBERARYSYSTEM_H__5567DC2E_1876_40AC_BB2A_8D3680B573C5__INCLUDED_)
#define AFX_LIBERARYSYSTEM_H__5567DC2E_1876_40AC_BB2A_8D3680B573C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CLiberarySystemApp:
// See Liberary System.cpp for the implementation of this class
//

class CLiberarySystemApp : public CWinApp
{
public:
	CLiberarySystemApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiberarySystemApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CLiberarySystemApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBERARYSYSTEM_H__5567DC2E_1876_40AC_BB2A_8D3680B573C5__INCLUDED_)
