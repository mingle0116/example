#ifndef ProcessHeader_H
#define ProcessHeader_H

#include<windows.h>
#include<iostream>

//声明句柄

//依次声明盘子、苹果、桔子
HANDLE Plate;
HANDLE Apple;
HANDLE Orange;
//依次声明爸爸、妈妈、儿子、女儿线程
HANDLE DadThread;
HANDLE MotherThread;
HANDLE SonThread;
HANDLE DaughterThread;

//函数
DWORD WINAPI dad(LPVOID IpParameter);
DWORD WINAPI mother(LPVOID IpParameter);
DWORD WINAPI son(LPVOID IpParameter);
DWORD WINAPI daughter(LPVOID IpParameter);

int NAppleNum = 0;
int NOrangeNum =0;
int NNum = 0;

#endif