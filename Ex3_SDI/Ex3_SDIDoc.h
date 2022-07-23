// Ex3_SDIDoc.h : interface of the CEx3_SDIDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX3_SDIDOC_H__AE7CDD47_4477_457D_A557_A4DAD9DCCF46__INCLUDED_)
#define AFX_EX3_SDIDOC_H__AE7CDD47_4477_457D_A557_A4DAD9DCCF46__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx3_SDIDoc : public CDocument
{
protected: // create from serialization only
	CEx3_SDIDoc();
	DECLARE_DYNCREATE(CEx3_SDIDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx3_SDIDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEx3_SDIDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx3_SDIDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX3_SDIDOC_H__AE7CDD47_4477_457D_A557_A4DAD9DCCF46__INCLUDED_)
