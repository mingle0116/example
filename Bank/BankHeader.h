#ifndef BankHeader
#define BankHeader

#include<iostream>

#define F  0
#define T  1

//�������ݾ������
int M=50;//��Դ�������
int N=50;//���������������

char CName[50]={0};  //�Զ�����Դ������
int Available[50]={0};
int Max[50][50]={0};
int Allocation[50][50]={0};
int Need[50][50]={0};//��Ҫ����Դ����  Max-Allocation
int NRequest[50]={0};//NRequest[i]=k ����ĳ���̵�������Դ����i����Դk��
int NWork[50]={0};
int NFinish[50]={0};
int SafetyList[50]={0};//��ȫ����

void initAll();
int ifSafe();
void Bank();
void display();
int distribute(int i);
int Redistribute(int i);
#endif