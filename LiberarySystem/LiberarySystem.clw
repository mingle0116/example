; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CBookSearchBroReDig
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "LiberarySystem.h"

ClassCount=17
Class1=CLiberarySystemApp
Class2=CLiberarySystemDlg
Class3=CAboutDlg

ResourceCount=18
Resource1=IDD_ReaderManagement_DIALOG14
Resource2=IDR_MAINFRAME
Resource3=IDD_StuLogin_DIALOG3
Class4=CRegisterDig
Resource4=IDD_Register_DIALOG1
Class5=CLoginDig
Resource5=IDD_AdminLogin_DIALOG6
Class6=CStuLoginDig
Resource6=IDD_ReaderWorkShip_DIALOG4
Resource7=IDD_BroRecord_DIALOG9
Class7=CBookListDig
Class8=CReaderWorkDig
Resource8=IDD_AdminManagemetnt_DIALOG10
Class9=CAdminLoginDig
Resource9=IDD_SearBroReBook_DIALOG8
Class10=CReaderPriInforDig
Resource10=IDD_BookList2_DIALOG12
Class11=CBookSearchBroReDig
Resource11=IDD_AllReaderList_DIALOG13
Class12=CBroRecordDig
Resource12=IDD_Login_DIALOG2
Resource13=IDD_ReaderBookList_DIALOG5
Resource14=IDD_BookManagement_DIALOG11
Class13=CAdminBookManagement
Class14=CAdminWork
Resource15=IDD_ReaderPriInfor_DIALOG7
Class15=CBookList2Dig
Resource16=IDR_MENU1
Class16=CAllReaderDig1
Resource17=IDD_LIBERARYSYSTEM_DIALOG
Class17=CAdminReaderManagement
Resource18=IDR_MENU2

[CLS:CLiberarySystemApp]
Type=0
HeaderFile=LiberarySystem.h
ImplementationFile=LiberarySystem.cpp
Filter=N

[CLS:CLiberarySystemDlg]
Type=0
HeaderFile=LiberarySystemDlg.h
ImplementationFile=LiberarySystemDlg.cpp
Filter=D
LastObject=CLiberarySystemDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=LiberarySystemDlg.h
ImplementationFile=LiberarySystemDlg.cpp
Filter=D

[DLG:IDD_LIBERARYSYSTEM_DIALOG]
Type=1
Class=CLiberarySystemDlg
ControlCount=5
Control1=IDC_STATIC,button,1342177287
Control2=IDC_LOGIN,button,1342242816
Control3=IDC_SIGNIN,button,1342242816
Control4=IDC_EXIT,button,1342242816
Control5=IDC_STATIC,static,1342308352

[DLG:IDD_Register_DIALOG1]
Type=1
Class=CRegisterDig
ControlCount=14
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342177280
Control3=IDC_ACCOUNT_EDIT1,edit,1350762624
Control4=IDC_STATIC,static,1342308352
Control5=IDC_PASSWORD_EDIT2,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_COMMIT_EDIT3,edit,1350631552
Control8=IDC_SIGNIN_BUTTON1,button,1342242816
Control9=IDC_CANCEL_BUTTON2,button,1342242816
Control10=IDC_STATIC,static,1342308352
Control11=IDC_MAJOR_EDIT1,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_NAME_EDIT2,edit,1350631552
Control14=IDC_BACK_BUTTON,button,1342242816

[MNU:IDR_MENU1]
Type=1
Class=CBookListDig
Command1=ID_CHECK_BOOK
Command2=ID_SEARCH_BRO_RE_BOOK
Command3=ID_SEAR_PRIVATE_INFOR
Command4=ID_BRO_RECORD
CommandCount=4

[CLS:CRegisterDig]
Type=0
HeaderFile=RegisterDig.h
ImplementationFile=RegisterDig.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_ACCOUNT_EDIT1

[DLG:IDD_Login_DIALOG2]
Type=1
Class=CLoginDig
ControlCount=5
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STU_BUTTON,button,1342242816
Control4=IDC_ADMIN_BUTTON,button,1342242816
Control5=IDC_BACK_BUTTON,button,1342242816

[CLS:CLoginDig]
Type=0
HeaderFile=LoginDig.h
ImplementationFile=LoginDig.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CLoginDig

[DLG:IDD_StuLogin_DIALOG3]
Type=1
Class=CStuLoginDig
ControlCount=8
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342177280
Control3=IDC_ACCOUNT_EDIT1,edit,1350762624
Control4=IDC_STATIC,static,1342308352
Control5=IDC_PASSWORD_EDIT2,edit,1350631552
Control6=IDC_LOGIN_BUTTON1,button,1342242816
Control7=IDC_CANCEL_BUTTON2,button,1342242816
Control8=IDC_BACK_BUTTON,button,1342242816

[CLS:CStuLoginDig]
Type=0
HeaderFile=StuLoginDig.h
ImplementationFile=StuLoginDig.cpp
BaseClass=CDialog
Filter=D
LastObject=CStuLoginDig

[DLG:IDD_ReaderWorkShip_DIALOG4]
Type=1
Class=CReaderWorkDig
ControlCount=0

[DLG:IDD_ReaderBookList_DIALOG5]
Type=1
Class=CBookListDig
ControlCount=1
Control1=IDC_BOOK_LIST,SysListView32,1350567937

[CLS:CBookListDig]
Type=0
HeaderFile=BookListDig.h
ImplementationFile=BookListDig.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CBookListDig

[CLS:CReaderWorkDig]
Type=0
HeaderFile=ReaderWorkDig.h
ImplementationFile=ReaderWorkDig.cpp
BaseClass=CDialog
Filter=D
LastObject=CReaderWorkDig
VirtualFilter=dWC

[DLG:IDD_AdminLogin_DIALOG6]
Type=1
Class=CAdminLoginDig
ControlCount=8
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342177280
Control3=IDC_ACCOUNT_EDIT1,edit,1350762624
Control4=IDC_STATIC,static,1342308352
Control5=IDC_PASSWORD_EDIT2,edit,1350631552
Control6=IDC_LOGIN_BUTTON1,button,1342242816
Control7=IDC_CANCEL_BUTTON2,button,1342242816
Control8=IDC_BACK_BUTTON,button,1342242816

[CLS:CAdminLoginDig]
Type=0
HeaderFile=AdminLoginDig.h
ImplementationFile=AdminLoginDig.cpp
BaseClass=CDialog
Filter=D
LastObject=CAdminLoginDig

[DLG:IDD_ReaderPriInfor_DIALOG7]
Type=1
Class=CReaderPriInforDig
ControlCount=1
Control1=IDC_READER_PRI_INFOR_LIST,SysListView32,1350567937

[CLS:CReaderPriInforDig]
Type=0
HeaderFile=ReaderPriInforDig.h
ImplementationFile=ReaderPriInforDig.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CReaderPriInforDig

[DLG:IDD_SearBroReBook_DIALOG8]
Type=1
Class=CBookSearchBroReDig
ControlCount=15
Control1=IDC_STATIC,static,1342308352
Control2=IDC_SEARCH_BOOK_NAME_EDIT1,edit,1350631552
Control3=IDC_SEARCH_BUTTON1,button,1342242816
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,static,1342308352
Control6=IDC_BOOK_NAME_EDIT2,edit,1484849280
Control7=IDC_STATIC,static,1342308352
Control8=IDC_BOOKID_EDIT2,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_SUM_EDIT3,edit,1484849280
Control11=IDC_BRO_BUTTON2,button,1342242816
Control12=IDC_RETURN_BUTTON3,button,1342242816
Control13=IDC_STATIC,static,1342308352
Control14=IDC_Month_EDIT5,edit,1350631552
Control15=IDC_STATIC,static,1342308352

[CLS:CBookSearchBroReDig]
Type=0
HeaderFile=BookSearchBroReDig.h
ImplementationFile=BookSearchBroReDig.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CBookSearchBroReDig

[DLG:IDD_BroRecord_DIALOG9]
Type=1
Class=CBroRecordDig
ControlCount=1
Control1=IDC_BRO_RECORD_LIST,SysListView32,1350565889

[CLS:CBroRecordDig]
Type=0
HeaderFile=BroRecordDig.h
ImplementationFile=BroRecordDig.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CBroRecordDig

[DLG:IDD_AdminManagemetnt_DIALOG10]
Type=1
Class=CAdminWork
ControlCount=0

[DLG:IDD_BookManagement_DIALOG11]
Type=1
Class=CAdminBookManagement
ControlCount=18
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342308352
Control3=IDC_BOOK_NAME_EDIT1,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_BOOKID_EDIT2,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_AUTHOR_EDIT3,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_PRESS_EDIT4,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_DATE_EDIT5,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_PRICE_EDIT6,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_SUM_EDIT7,edit,1350631552
Control16=IDC_SEARCH_BUTTON1,button,1342242816
Control17=IDC_DEL_BUTTON2,button,1342242816
Control18=IDC_ADD_BUTTON3,button,1342242816

[MNU:IDR_MENU2]
Type=1
Class=?
Command1=ID_CHEC_DEL_ADD_UP_READER
Command2=ID_CHECK_ALL_READER
Command3=ID_CHEC_DEL_ADD_UP_BOOK
Command4=ID_CHECK_ALL_BOOKS
Command5=ID_EXIT
CommandCount=5

[CLS:CAdminBookManagement]
Type=0
HeaderFile=AdminBookManagement.h
ImplementationFile=AdminBookManagement.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CAdminBookManagement

[CLS:CAdminWork]
Type=0
HeaderFile=AdminWork.h
ImplementationFile=AdminWork.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CAdminWork

[DLG:IDD_BookList2_DIALOG12]
Type=1
Class=CBookList2Dig
ControlCount=1
Control1=IDC_BOOK_LIST2,SysListView32,1350567937

[CLS:CBookList2Dig]
Type=0
HeaderFile=BookList2Dig.h
ImplementationFile=BookList2Dig.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CBookList2Dig

[DLG:IDD_AllReaderList_DIALOG13]
Type=1
Class=CAllReaderDig1
ControlCount=1
Control1=IDC_ALL_READER_LIST1,SysListView32,1350631425

[CLS:CAllReaderDig1]
Type=0
HeaderFile=AllReaderDig1.h
ImplementationFile=AllReaderDig1.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CAllReaderDig1

[DLG:IDD_ReaderManagement_DIALOG14]
Type=1
Class=CAdminReaderManagement
ControlCount=15
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342308352
Control3=IDC_NAME_EDIT1,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_ID_EDIT2,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_PASSWORD_EDIT3,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_BOOK_DATE_LIST2,listbox,1352728835
Control10=IDC_UPDATE_BUTTON2,button,1342242816
Control11=IDC_DEL_BUTTON3,button,1342242816
Control12=IDC_ADD_BUTTON4,button,1342242816
Control13=IDC_SEARCH_READER_BUTTON5,button,1342242816
Control14=IDC_PRO_EDIT4,edit,1350631552
Control15=IDC_STATIC,static,1342308352

[CLS:CAdminReaderManagement]
Type=0
HeaderFile=AdminReaderManagement.h
ImplementationFile=AdminReaderManagement.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CAdminReaderManagement

