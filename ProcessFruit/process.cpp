#include"ProcessHeader.h"
using namespace std;


int main(){

 cout<<"�߳�ִ�д���(>=0)"<<endl;
 cin>>NNum;
 //�ݴ�
 while(NNum<0){
   cout<<" ��������,>=0 "<<endl;
   cin>>NNum;
 }
 Plate  = CreateSemaphore(NULL,1,1,NULL);//�����ź���  ��һ��1�ǳ�ʼ��
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
 
 //�ر��߳̾��
 CloseHandle(DadThread);
 CloseHandle(MotherThread);
 CloseHandle(SonThread);
 CloseHandle(DaughterThread);

 //�ر��ź������
 CloseHandle(Plate);
 CloseHandle(Apple);
 CloseHandle(Orange);


system ("pause");

 return 0;
}
//�ְ��߳�
DWORD WINAPI dad(LPVOID IpParameter){
	int i=0;
    while( i<NNum){

	   WaitForSingleObject(Plate, INFINITE);//p���� / wait 
	   NAppleNum++;//�����е�ƻ����Ŀ�����һ��
	   cout<<"�ְ����������ƻ��"<<endl;
	   cout<<"������"<<((NAppleNum==1)? "ƻ��":"����")<<endl;
	   ReleaseSemaphore(Apple,1,NULL);//V���� �ͷ��ź� ��ƻ��
	   i++;
	}
	return 0;
}
//�����߳�
DWORD WINAPI mother(LPVOID IpParameter){
    int i=0;
	while(i<NNum){

	   WaitForSingleObject(Plate, INFINITE);//p���� / wait 
	   NOrangeNum++;
	   cout<<"������������Ž���"<<endl;
	   cout<<"������"<<((NOrangeNum==1)? "����":"ƻ��")<<endl;
	   ReleaseSemaphore(Orange,1,NULL);//V����  singnal
	   i++;
	}
   return 0;
}
//�����߳�
DWORD WINAPI son(LPVOID IpParameter){
    int i=0;
	while(i<NNum){

	   WaitForSingleObject(Orange,INFINITE);
	   NOrangeNum--;
	   cout<<"�������߽���"<<endl;
	   ReleaseSemaphore(Plate,1,NULL);
	   i++;
	
	
	}

    return 0;

}
//Ů���߳�
DWORD WINAPI daughter(LPVOID IpParameter){
     int i=0;
	 while(i<NNum){

	   WaitForSingleObject(Apple,INFINITE);
	   NAppleNum--;
	   cout<<"Ů��������ƻ��"<<endl;
	   ReleaseSemaphore(Plate,1,NULL);
	   i++;
	 
	 }

    return 0;
}
