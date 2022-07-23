// Liberary SystemDoc.h : interface of the CLiberarySystemDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBERARYSYSTEMDOC_H__B156859B_BE59_4066_8F7B_A5CFEFB47B10__INCLUDED_)
#define AFX_LIBERARYSYSTEMDOC_H__B156859B_BE59_4066_8F7B_A5CFEFB47B10__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLiberarySystemDoc : public CDocument
{
protected: // create from serialization only
	CLiberarySystemDoc();
	DECLARE_DYNCREATE(CLiberarySystemDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLiberarySystemDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLiberarySystemDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLiberarySystemDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBERARYSYSTEMDOC_H__B156859B_BE59_4066_8F7B_A5CFEFB47B10__INCLUDED_)
