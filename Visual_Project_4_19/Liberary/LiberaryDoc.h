// LiberaryDoc.h : interface of the CLiberaryDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBERARYDOC_H__A4FD5634_8094_4D39_A680_2CE4E7C418D0__INCLUDED_)
#define AFX_LIBERARYDOC_H__A4FD5634_8094_4D39_A680_2CE4E7C418D0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLiberaryDoc : public CDocument
{
protected: // create from serialization only
	CLiberaryDoc();
	DECLARE_DYNCREATE(CLiberaryDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiberaryDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLiberaryDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLiberaryDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBERARYDOC_H__A4FD5634_8094_4D39_A680_2CE4E7C418D0__INCLUDED_)
