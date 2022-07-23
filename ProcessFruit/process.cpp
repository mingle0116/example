#include"ProcessHeader.h"
using namespace std;


int main(){

 cout<<"线程执行次数(>=0)"<<endl;
 cin>>NNum;
 //容错
 while(NNum<0){
   cout<<" 请重输入,>=0 "<<endl;
   cin>>NNum;
 }
 Plate  = CreateSemaphore(NULL,1,1,NULL);//创建信号量  第一个1是初始量
 Apple  = CreateSemaphore(NULL,0,1,NULL);
 Orange = CreateSemaphore(NULL,0,1,NULL);

 DadThread     = CreateThread(NULL, 0, dad,NULL,0,NULL);
 MotherThread  = CreateThread(NULL, 0, mother,NULL,0,NULL);
 SonThread     = CreateThread(NULL, 0, son,NULL,0,NULL);
 DaughterThread= CreateThread(NULL, 0, daughter,NULL,0,NULL);
 
 WaitForSingleObject(DadThread,INFINITE);
 WaitForSingleObject(MotherThread,INFINITE);
 WaitForSingleObject(SonThread,INFINITE);
 WaitForSingleObject(DaughterThread,INFINITE);
 
 //关闭线程句柄
 CloseHandle(DadThread);
 CloseHandle(MotherThread);
 CloseHandle(SonThread);
 CloseHandle(DaughterThread);

 //关闭信号量句柄
 CloseHandle(Plate);
 CloseHandle(Apple);
 CloseHandle(Orange);


system ("pause");

 return 0;
}
//爸爸线程
DWORD WINAPI dad(LPVOID IpParameter){
	int i=0;
    while( i<NNum){

	   WaitForSingleObject(Plate, INFINITE);//p操作 / wait 
	   NAppleNum++;//盘子中的苹果数目，最多一个
	   cout<<"爸爸向盘子里放苹果"<<endl;
	   cout<<"盘子有"<<((NAppleNum==1)? "苹果":"桔子")<<endl;
	   ReleaseSemaphore(Apple,1,NULL);//V操作 释放信号 有苹果
	   i++;
	}
	return 0;
}
//妈妈线程
DWORD WINAPI mother(LPVOID IpParameter){
    int i=0;
	while(i<NNum){

	   WaitForSingleObject(Plate, INFINITE);//p操作 / wait 
	   NOrangeNum++;
	   cout<<"妈妈向盘子里放桔子"<<endl;
	   cout<<"盘子有"<<((NOrangeNum==1)? "桔子":"苹果")<<endl;
	   ReleaseSemaphore(Orange,1,NULL);//V操作  singnal
	   i++;
	}
   return 0;
}
//儿子线程
DWORD WINAPI son(LPVOID IpParameter){
    int i=0;
	while(i<NNum){

	   WaitForSingleObject(Orange,INFINITE);
	   NOrangeNum--;
	   cout<<"儿子拿走桔子"<<endl;
	   ReleaseSemaphore(Plate,1,NULL);
	   i++;
	
	
	}

    return 0;

}
//女儿线程
DWORD WINAPI daughter(LPVOID IpParameter){
     int i=0;
	 while(i<NNum){

	   WaitForSingleObject(Apple,INFINITE);
	   NAppleNum--;
	   cout<<"女儿拿走了苹果"<<endl;
	   ReleaseSemaphore(Plate,1,NULL);
	   i++;
	 
	 }

    return 0;
}
