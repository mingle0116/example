#ifndef ProcessHeader_H
#define ProcessHeader_H

#include<windows.h>
#include<iostream>

//�������

//�����������ӡ�ƻ��������
HANDLE Plate;
HANDLE Apple;
HANDLE Orange;
//���������ְ֡����衢���ӡ�Ů���߳�
HANDLE DadThread;
HANDLE MotherThread;
HANDLE SonThread;
HANDLE DaughterThread;

//����
DWORD WINAPI dad(LPVOID IpParameter);
DWORD WINAPI mother(LPVOID IpParameter);
DWORD WINAPI son(LPVOID IpParameter);
DWORD WINAPI daughter(LPVOID IpParameter);

int NAppleNum = 0;
int NOrangeNum =0;
int NNum = 0;

#endif