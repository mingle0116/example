#include <windows.h>

//6窗口过程
//CALLBACK   代表参数传递顺序，从右到左，依次入栈，并且在函数返回前清空堆栈
LRESULT CALLBACK  WindowProc(
							 HWND hwnd, //消息所处的窗口句柄
							UINT uMsg, //具体消息名称  WM_xxx 消息名
							WPARAM wParam, // 键盘的附加消息
							LPARAM lParam  //鼠标的附加消息
							)
{



    // 返回值用默认处理方式
	return DefWindowProc(hwnd,uMsg,wParam,lParam);


}







//WINAPI   代表参数传递顺序，从右到左，依次入栈，并且在函数返回前清空堆栈
//

int WINAPI WinMain(HINSTANCE hInstance, // 应用程序使用句柄
				   HINSTANCE hPrevInstance,//上一个应用程序句柄  win32环境下，参数一般就为null,不起作用
				   LPSTR lpCmdLine,//char* argv[]   参数
				   int nShowCmd){//显示窗口命令 ，最大化，最小化，正常

    //1设计窗口
	//2注册窗口
	//3创建窗口
	//4显示和更新
    //5通过循环取消息
    //6处理消息（窗口过程）




    //1设计窗口
	WNDCLASS wc;
	wc.cbClsExtra=0;//类的额外的内存
	wc.cbWndExtra=0;//窗口的额外的内存
	wc.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);//设置背景
    wc.hCursor=LoadCursor(NULL,NULL);//设置光标.如果第一个参数为null 代表用系统默认的光标,第二个参数是选中系统的样式
    wc.hIcon=LoadIcon(NULL,NULL);//设置图标，如果第一个参数为null 代表用系统默认的光标,第二个参数是选中系统的样式
    wc.hInstance=hInstance;  //应用程序实例句柄  传入winmain中的形参即可
    wc.lpfnWndProc=WindowProc;//窗口过程的函数，，回调函数
	wc.lpszClassName=TEXT("WIN");//窗口的类名称
	wc.lpszMenuName=NULL;//菜单名称
    wc.style=0;//0代表默认风格


	//2注册窗口类
	RegisterClass(&wc);



	/*
	lpClassName,     类名
	lpWindowName,    窗口标题名
	dwStyle,         窗口样式   WS_OCERLAPPEDWINDOW  风格
	x,               显示坐标
	y,
    nWidth,          宽高  CW_USEDEFAULT   默认值
	nHeight,         
	hWndParent,      NULL 父窗口  
	hMenu,           NULL 菜单
	hInstance,       
	lpParam           附加值 鼠标附加值  NULL
	
	
	
	*/
	//3创建窗口
	HWND hwnd=CreateWindow(wc.lpszClassName,TEXT("windows"),NULL,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,CW_USEDEFAULT,NULL,NULL,wc.hInstance,NULL);
	
	//4显示和更新

	ShowWindow(hwnd,SW_SHOWNORMAL);
	UpdateWindow(hwnd);

	//5循环消息

   /*

	 HWND        hwnd;   主窗口的句柄
    UINT        message;  具体的消息名称
    WPARAM      wParam;   附加消息 键盘消息
    LPARAM      lParam;   附加消息 鼠标消息
    DWORD       time;      消息产生的时间
    POINT       pt;        附加消息  鼠标消息
		
	*/



	MSG msg;

	while(1){

	/*
	GetMessage()
	的形参：

	LPMSG lpMsg,  消息  指针
    HWND hWnd ,    捕获窗口   NULL代表捕获所有窗口
    UINT wMsgFilterMin,  最小化过滤消息   填0 代表捕获所有消息
    UINT wMsgFilterMax   最大化过滤消息  
	
	*/
		if(GetMessage(&msg,NULL,0,0)==FALSE){
		
		  break;
		}
	    
        //翻译消息
		TranslateMessage(&msg);


		//分发消息
		DispatchMessage(&msg);
	
	}
	
	
	//6窗口消息过程   

	
	
	
	
	
	return 0;
}