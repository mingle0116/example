; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTab1
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Ex_Student.h"
LastPage=0

ClassCount=9
Class1=CEx_StudentApp
Class2=CEx_StudentDoc
Class3=CEx_StudentView
Class4=CMainFrame

ResourceCount=6
Resource1=IDR_MAINFRAME
Resource2=IDD_DIALOG1
Class5=CAboutDlg
Class6=CInputDlg
Resource3=IDD_DIALOGTEST
Class7=CTestDlg
Resource4=IDD_DIALOG2
Class8=CEDit
Resource5=IDD_ABOUTBOX
Class9=CTab1
Resource6=IDD_CHANGE

[CLS:CEx_StudentApp]
Type=0
HeaderFile=Ex_Student.h
ImplementationFile=Ex_Student.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC
LastObject=CEx_StudentApp

[CLS:CEx_StudentDoc]
Type=0
HeaderFile=Ex_StudentDoc.h
ImplementationFile=Ex_StudentDoc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=CEx_StudentDoc

[CLS:CEx_StudentView]
Type=0
HeaderFile=Ex_StudentView.h
ImplementationFile=Ex_StudentView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CEx_StudentView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=ID_CHANGE




[CLS:CAboutDlg]
Type=0
HeaderFile=Ex_Student.cpp
ImplementationFile=Ex_Student.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=IDD_EDIT2
Command18=ID_CHANGE
Command19=ID_STUREC_ADD
CommandCount=19

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_DIALOG1]
Type=1
Class=CInputDlg
ControlCount=13
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT1,edit,1350631552
Control9=IDC_EDIT2,edit,1350631552
Control10=IDC_EDIT3,edit,1350631552
Control11=IDC_EDIT4,edit,1350631552
Control12=IDC_EDIT5,edit,1350631552
Control13=IDC_STATIC,static,1342177296

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[CLS:CInputDlg]
Type=0
HeaderFile=InputDlg.h
ImplementationFile=InputDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=ID_STUREC_ADD
VirtualFilter=dWC

[DLG:IDD_DIALOGTEST]
Type=1
Class=CTestDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=ID_TEXT,static,1342308352
Control4=IDC_BUTTON1,button,1342242816

[CLS:CTestDlg]
Type=0
HeaderFile=TestDlg.h
ImplementationFile=TestDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=ID_TEXT
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CEDit
ControlCount=2
Control1=IDC_EDIT2,edit,1353777348
Control2=IDC_BUTTON1,button,1342242816

[CLS:CEDit]
Type=0
HeaderFile=EDit.h
ImplementationFile=EDit.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CEDit

[DLG:IDD_CHANGE]
Type=1
Class=CTab1
ControlCount=1
Control1=IDD_TAB1,SysTabControl32,1342193920

[CLS:CTab1]
Type=0
HeaderFile=Tab1.h
ImplementationFile=Tab1.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_TAB1

