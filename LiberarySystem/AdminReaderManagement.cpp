// AdminReaderManagement.cpp : implementation file
//

#include "stdafx.h"
#include "LiberarySystem.h"
#include "LiberarySystemDlg.h"
#include "AdminReaderManagement.h"

#include "BookList2Dig.h"
#include "AllReaderDig1.h"
#include "AdminBookManagement.h"
#include "AllClass.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAdminReaderManagement dialog


CAdminReaderManagement::CAdminReaderManagement(CWnd* pParent /*=NULL*/)
	: CDialog(CAdminReaderManagement::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAdminReaderManagement)
	m_name = _T("");
	m_id = _T("");
	m_password = _T("");
	m_bro_date = _T("");
	m_pro = _T("");
	//}}AFX_DATA_INIT
}


void CAdminReaderManagement::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAdminReaderManagement)
	DDX_Text(pDX, IDC_NAME_EDIT1, m_name);
	DDX_Text(pDX, IDC_ID_EDIT2, m_id);
	DDX_Text(pDX, IDC_PASSWORD_EDIT3, m_password);
	DDX_LBString(pDX, IDC_BOOK_DATE_LIST2, m_bro_date);
	DDX_Text(pDX, IDC_PRO_EDIT4, m_pro);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAdminReaderManagement, CDialog)
	//{{AFX_MSG_MAP(CAdminReaderManagement)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_BOOK, OnChecDelAddUpBook)
	ON_COMMAND(ID_CHEC_DEL_ADD_UP_READER, OnChecDelAddUpReader)
	ON_COMMAND(ID_CHECK_ALL_BOOKS, OnCheckAllBooks)
	ON_COMMAND(ID_CHECK_ALL_READER, OnCheckAllReader)
	ON_BN_CLICKED(IDC_UPDATE_BUTTON2, OnUpdateButton2)
	ON_BN_CLICKED(IDC_DEL_BUTTON3, OnDelButton3)
	ON_BN_CLICKED(IDC_ADD_BUTTON4, OnAddButton4)
	ON_BN_CLICKED(IDC_SEARCH_READER_BUTTON5, OnSearchReaderButton5)
	ON_COMMAND(ID_EXIT, OnExit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAdminReaderManagement message handlers

void CAdminReaderManagement::OnChecDelAddUpBook() 
{
	// TODO: Add your command handler code here
    this->OnOK();
	CAdminBookManagement dig;
	dig.DoModal();
}

void CAdminReaderManagement::OnChecDelAddUpReader() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CAdminReaderManagement dig;
	dig.DoModal();
}

void CAdminReaderManagement::OnCheckAllBooks() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CBookList2Dig dig;
	dig.DoModal();
}

void CAdminReaderManagement::OnCheckAllReader() 
{
	// TODO: Add your command handler code here
	this->OnOK();
	CAllReaderDig1 dig;
	dig.DoModal();
}


void CAdminReaderManagement::OnUpdateButton2() 
{
	// TODO: Add your control notification handler code here
		UpdateData();

	if(m_name==""||m_id==""||m_password=="")
		AfxMessageBox("����������Ҫ�޸�����Ķ��ߵ����֣���ź��޸ĵ����룬�ٰ��޸İ�ť");
	else
	{
		Reader reader,reader2;
		int pos;
		std::string name(m_name.GetBuffer(0));
		m_name.ReleaseBuffer();
     
		std::string num(m_id.GetBuffer(0));
		m_id.ReleaseBuffer();

		std::string password(m_password.GetBuffer(0));
		m_password.ReleaseBuffer();

		if(CenterControl.RDase.Search_Reader(num,reader,pos)){

		    	if(reader.Get_RName()==name){
					  string past;
					  past=reader.Get_RPassword();

                      reader.Set_RPassword(password);

					  if(CenterControl.RDase.Add_Reader(reader)){
					
					 
                      if( CenterControl.RDase.Search_Account_By_past(past,reader2,pos)&&(reader2.Get_RAccount()==num)){
                          if(CenterControl.RDase.Del_Reader(num,reader2))
						  {
							  UpdateData(FALSE);
						  AfxMessageBox("�޸����");
					       } 
					  
					  }
				  }
				}
				else{
					AfxMessageBox("�޸Ķ��ߵ������ͱ�Ų�һ�£���ȷ��һ��");
				}
	
		} 
		else{
			AfxMessageBox("�����ڸö��ߣ��޷��޸���Ϣ");
		}
	}
}

void CAdminReaderManagement::OnDelButton3() 
{
	// TODO: Add your control notification handler code here
	UpdateData();

	if(m_name==""||m_id=="")
		AfxMessageBox("����������Ҫɾ���Ķ��ߵ����ֺͱ�ţ��ٰ�ɾ����ť");
	else
	{
		Reader reader;
		int pos;
		std::string name(m_name.GetBuffer(0));
		m_name.ReleaseBuffer();
     
		std::string num(m_id.GetBuffer(0));
		m_id.ReleaseBuffer();

		if(CenterControl.RDase.Search_Reader(num,reader,pos)){

		    	if(reader.Get_RName()==name){


	          	if(CenterControl.RDase.Del_Reader(num,reader))
					{
			
						UpdateData(FALSE);
						AfxMessageBox("ɾ���ɹ�");
					}
				}
		}
		else{
			AfxMessageBox("ɾ�����ߵ������ͱ�Ų�һ�£���ȷ��һ��");
		}
	}
}

void CAdminReaderManagement::OnAddButton4() 
{
	// TODO: Add your control notification handler code here
		UpdateData();
	if(m_name=="" || m_id=="" || m_password==""||m_pro=="")
		AfxMessageBox("�뽫���ߵ���Ϣ��д�������ٰ���Ӱ�ť!");
	else
	{
		std::string  name(m_name.GetBuffer(0));
		m_name.ReleaseBuffer();
		
		std::string num(m_id.GetBuffer(0));
		m_id.ReleaseBuffer();
        
		std::string password(m_password.GetBuffer(0));
		m_password.ReleaseBuffer();

		std::string pro(m_pro.GetBuffer(0));
		m_pro.ReleaseBuffer();
		Reader reader;
		int pos;
		if(!(CenterControl.RDase.Search_Reader(num,reader,pos)))
		{	
				AfxMessageBox("������������Ϣ");
		   reader.Set_RName(name);
		   reader.Set_RNum(num);
		   reader.Set_RAccount(num);
		   reader.Set_RPassword(password);
		   reader.Set_RPro(pro);
	
		if(CenterControl.RDase.Add_Reader(reader))
		{
			UpdateData(FALSE);
			AfxMessageBox("��ӳɹ�");
		}

		}
		else{
		
		   AfxMessageBox("���ظ���ţ����������������Ϣ");
		
		}
	}
}

void CAdminReaderManagement::OnSearchReaderButton5() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	if(m_name==""||m_id==""){
		AfxMessageBox("������Ҫ���ҵĶ��ߵ����ֺͱ�ţ��ٰ�������");
	}
	else
	{
		Reader reader;
		int pos;
		std::string num(m_id.GetBuffer(0));
		m_id.ReleaseBuffer();

		if(CenterControl.RDase.Search_Reader(num,reader,pos))
		{
			AfxMessageBox("�����ɹ����ö�����Ϣ��ʾ����");

			m_name.Format("%s",(reader.Get_RName()).c_str());
			m_id.Format("%s",(reader.Get_RNum()).c_str());
			m_password.Format("%s",(reader.Get_RPassword()).c_str());
			m_pro.Format("%s",(reader.Get_RPro()).c_str());
            //string broBook,broDate;
			//const char *ch;
		//	for(int i=0;i<reader.Get_Cur_Sum();i++){
			//    broBook=reader.Bro_books[i].Get_BName();
			//	broDate=reader.Bro_books[i].Get_BroDate();
			//	broBook=broBook+"/"+broDate+"  ";
		   //    ch=broBook.data();
             //   ((CListBox *)GetDlgItem(IDC_BOOK_DATE_LIST2))->AddString(ch);
			UpdateData(FALSE);
			}
			
	
			else{
				AfxMessageBox("�����ڸ�λ����");
			}

	}
	
}


void CAdminReaderManagement::OnExit() 
{
	// TODO: Add your command handler code here
		int id=MessageBox("�Ƿ��˳�ϵͳ��","��ʾ",MB_OKCANCEL|MB_ICONQUESTION);
		if(id==IDOK){
                  exit(0);
		}
}
