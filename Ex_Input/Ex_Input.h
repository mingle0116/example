// Ex_Input.h : main header file for the EX_INPUT application
//

#if !defined(AFX_EX_INPUT_H__32E58CD0_22C4_4A34_8850_BD0A7DD8232F__INCLUDED_)
#define AFX_EX_INPUT_H__32E58CD0_22C4_4A34_8850_BD0A7DD8232F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEx_InputApp:
// See Ex_Input.cpp for the implementation of this class
//

class CEx_InputApp : public CWinApp
{
public:
	CEx_InputApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_InputApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEx_InputApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_INPUT_H__32E58CD0_22C4_4A34_8850_BD0A7DD8232F__INCLUDED_)
