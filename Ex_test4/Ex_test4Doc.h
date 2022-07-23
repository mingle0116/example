// Ex_test4Doc.h : interface of the CEx_test4Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX_TEST4DOC_H__EED3EC8A_AADD_4273_A511_19558652EFBE__INCLUDED_)
#define AFX_EX_TEST4DOC_H__EED3EC8A_AADD_4273_A511_19558652EFBE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx_test4Doc : public CDocument
{
protected: // create from serialization only
	CEx_test4Doc();
	DECLARE_DYNCREATE(CEx_test4Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_test4Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	CPoint m_ptRect;
	virtual ~CEx_test4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx_test4Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_TEST4DOC_H__EED3EC8A_AADD_4273_A511_19558652EFBE__INCLUDED_)
