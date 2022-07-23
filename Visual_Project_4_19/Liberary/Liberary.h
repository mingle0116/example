// Liberary.h : main header file for the LIBERARY application
//

#if !defined(AFX_LIBERARY_H__DDBF1DD8_39F2_4E6F_9DCA_EC9117028EE0__INCLUDED_)
#define AFX_LIBERARY_H__DDBF1DD8_39F2_4E6F_9DCA_EC9117028EE0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CLiberaryApp:
// See Liberary.cpp for the implementation of this class
//

class CLiberaryApp : public CWinApp
{
public:
	CLiberaryApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiberaryApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CLiberaryApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBERARY_H__DDBF1DD8_39F2_4E6F_9DCA_EC9117028EE0__INCLUDED_)
