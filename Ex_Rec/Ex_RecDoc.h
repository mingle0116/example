// Ex_RecDoc.h : interface of the CEx_RecDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX_RECDOC_H__61CA006C_90EC_4D5D_AB89_C04DC43AC467__INCLUDED_)
#define AFX_EX_RECDOC_H__61CA006C_90EC_4D5D_AB89_C04DC43AC467__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx_RecDoc : public CDocument
{
protected: // create from serialization only
	CEx_RecDoc();
	DECLARE_DYNCREATE(CEx_RecDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx_RecDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	CPoint m_ptRect;
	virtual ~CEx_RecDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx_RecDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX_RECDOC_H__61CA006C_90EC_4D5D_AB89_C04DC43AC467__INCLUDED_)
