#include <windows.h>

//6���ڹ���
//CALLBACK   �����������˳�򣬴��ҵ���������ջ�������ں�������ǰ��ն�ջ
LRESULT CALLBACK  WindowProc(
							 HWND hwnd, //��Ϣ�����Ĵ��ھ��
							UINT uMsg, //������Ϣ����  WM_xxx ��Ϣ��
							WPARAM wParam, // ���̵ĸ�����Ϣ
							LPARAM lParam  //���ĸ�����Ϣ
							)
{



    // ����ֵ��Ĭ�ϴ���ʽ
	return DefWindowProc(hwnd,uMsg,wParam,lParam);


}







//WINAPI   �����������˳�򣬴��ҵ���������ջ�������ں�������ǰ��ն�ջ
//

int WINAPI WinMain(HINSTANCE hInstance, // Ӧ�ó���ʹ�þ��
				   HINSTANCE hPrevInstance,//��һ��Ӧ�ó�����  win32�����£�����һ���Ϊnull,��������
				   LPSTR lpCmdLine,//char* argv[]   ����
				   int nShowCmd){//��ʾ�������� ����󻯣���С��������

    //1��ƴ���
	//2ע�ᴰ��
	//3��������
	//4��ʾ�͸���
    //5ͨ��ѭ��ȡ��Ϣ
    //6������Ϣ�����ڹ��̣�




    //1��ƴ���
	WNDCLASS wc;
	wc.cbClsExtra=0;//��Ķ�����ڴ�
	wc.cbWndExtra=0;//���ڵĶ�����ڴ�
	wc.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);//���ñ���
    wc.hCursor=LoadCursor(NULL,NULL);//���ù��.�����һ������Ϊnull ������ϵͳĬ�ϵĹ��,�ڶ���������ѡ��ϵͳ����ʽ
    wc.hIcon=LoadIcon(NULL,NULL);//����ͼ�꣬�����һ������Ϊnull ������ϵͳĬ�ϵĹ��,�ڶ���������ѡ��ϵͳ����ʽ
    wc.hInstance=hInstance;  //Ӧ�ó���ʵ�����  ����winmain�е��βμ���
    wc.lpfnWndProc=WindowProc;//���ڹ��̵ĺ��������ص�����
	wc.lpszClassName=TEXT("WIN");//���ڵ�������
	wc.lpszMenuName=NULL;//�˵�����
    wc.style=0;//0����Ĭ�Ϸ��


	//2ע�ᴰ����
	RegisterClass(&wc);



	/*
	lpClassName,     ����
	lpWindowName,    ���ڱ�����
	dwStyle,         ������ʽ   WS_OCERLAPPEDWINDOW  ���
	x,               ��ʾ����
	y,
    nWidth,          ���  CW_USEDEFAULT   Ĭ��ֵ
	nHeight,         
	hWndParent,      NULL ������  
	hMenu,           NULL �˵�
	hInstance,       
	lpParam           ����ֵ ��긽��ֵ  NULL
	
	
	
	*/
	//3��������
	HWND hwnd=CreateWindow(wc.lpszClassName,TEXT("windows"),NULL,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,NULL,NULL,wc.hInstance,NULL);
	
	//4��ʾ�͸���

	ShowWindow(hwnd,SW_SHOWNORMAL);
	UpdateWindow(hwnd);

	//5ѭ����Ϣ

   /*

	 HWND        hwnd;   �����ڵľ��
    UINT        message;  �������Ϣ����
    WPARAM      wParam;   ������Ϣ ������Ϣ
    LPARAM      lParam;   ������Ϣ �����Ϣ
    DWORD       time;      ��Ϣ������ʱ��
    POINT       pt;        ������Ϣ  �����Ϣ
		
	*/



	MSG msg;

	while(1){

	/*
	GetMessage()
	���βΣ�

	LPMSG lpMsg,  ��Ϣ  ָ��
    HWND hWnd ,    ���񴰿�   NULL���������д���
    UINT wMsgFilterMin,  ��С��������Ϣ   ��0 ������������Ϣ
    UINT wMsgFilterMax   ��󻯹�����Ϣ  
	
	*/
		if(GetMessage(&msg,NULL,0,0)==FALSE){
		
		  break;
		}
	    
        //������Ϣ
		TranslateMessage(&msg);


		//�ַ���Ϣ
		DispatchMessage(&msg);
	
	}
	
	
	//6������Ϣ����   

	
	
	
	
	
	return 0;
}