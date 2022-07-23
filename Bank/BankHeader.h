#ifndef BankHeader
#define BankHeader

#include<iostream>

#define F  0
#define T  1

//定义数据矩阵变量
int M=50;//资源最大数量
int N=50;//进程种类最大数量

char CName[50]={0};  //自定义资源的名称
int Available[50]={0};
int Max[50][50]={0};
int Allocation[50][50]={0};
int Need[50][50]={0};//需要的资源矩阵  Max-Allocation
int NRequest[50]={0};//NRequest[i]=k 代表某进程的请求资源量第i类资源k个
int NWork[50]={0};
int NFinish[50]={0};
int SafetyList[50]={0};//安全序列

void initAll();
int ifSafe();
void Bank();
void display();
int distribute(int i);
int Redistribute(int i);
#endif