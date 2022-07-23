#include"BankHeader.h"
using namespace std;
int main(){

int altertive;
  

	
	do{
	

		cout<<"\t-------------------银行家资源分配算法------------------"<<endl;
		cout<<"                     1:资源分配 "<<endl;	
		cout<<"                     2:重新输入或者初始化数据       "<<endl;
		cout<<"                     0:退出       "<<endl;
		cout<<"\t-------------------------------------------------------"<<endl;
		cout<<"请选择：";
		cin.sync; //释放缓冲区
		cin>>altertive;
		
		switch(altertive)
		{
			case 1:
			
				{Bank();
				break;}	
			case 2:
                {
					initAll();
                    display();

    
					if(!ifSafe()) 
					{ 

						cout<<"系统不安全,程序退出"<<endl;
						
					}
					break;
				}
			case 0:
			
				exit(0);
			default: cout<<"输入错误";break;
		}
	} while(altertive);



system("pause");

return 0;
}
void initAll(){

   int i,j,m,n;// n 进程  m资源
   int number, sign;
   char name ;
   int distributed[50]={0};//已经分配的资源

	//初始化系统资源数目及各资源初试个数 
   cout<<"系统可用资源种类为:"<<endl;
   cin>>m;

	M=m;
	for(i=0;i<m;i++)
	{   
        cout<<"资源"<<i<<"的名称:";
        cin.sync();
	    cin>>name;	
		CName[i]=name;
		cout<<"资源"<< name <<"的初始个数(资源的可用加已分配的资源）为:";
	    cin>>number;	
	
		Available[i]=number;
	}
	
	//初始化各进程的最大需求矩阵
	cout<<endl;
	cout<<"请输入进程的数量:";
	cin>>n;	
	
	N=n;
	cout<<"请输入各进程的最大需求矩阵的值:"<<endl;

	do{
		sign = F;
		for(i=0;i<N;i++)
			for(j=0;j<M;j++)
			{   
				cin>>Max[i][j];
			
				if(Max[i][j]>Available[j])
					sign = T;				
			}
		if(sign)
			cout<<"资源最大需求量大于系统中资源最大量，请重新输入!"<<endl;
									
	} while(sign);
	
			
	//初始化各进程已经分配的资源量，并求得还需要的资源量 
	do{
		sign=F;
		cout<<"请输入各进程已经分配的资源量:"<<endl;
	
		for(i=0;i<N;i++)
		{
			for(j=0;j<M;j++)
		  	{
				cin>>Allocation[i][j];
			
				if(Allocation[i][j]>Max[i][j])  
					sign=T;				
				Need[i][j]=Max[i][j]-Allocation[i][j];
				distributed[j]+=Allocation[i][j];//统计已经分配给进程的资源数目
		  	}
		}
		if(sign)
			cout<<"分配的资源大于最大量，请重新输入!"<<endl;
					
	}while(sign);
	
	//可利用的资源量 
	for(j=0;j<M;j++)
		Available[j]=Available[j]-distributed[j];
}

void display()
{
	int i,j;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"系统目前可用的资源   Available:"<<endl;
	
	for(i=0;i<M;i++)
		cout<<CName[i];
        cout<<endl;
	for(j=0;j<M;j++)
		cout<<Available[j];
        cout<<endl;
    cout<<"系统当前的资源分配情况如下："<<endl;
	cout<<"*******Allocation******Max******Need"<<endl;
	cout<<"进程名  ";

  //打印资源名称
	for(j=0;j<3;j++){
		for(i=0;i<N;i++)
			cout<<CName[i];
			cout<<"      ";	
	}
	cout<<endl;
	
	//打印每个进程的Allocation、Max、Need 
	for(i=0;i<N;i++){
		cout<<"p"<<i<<"       ";	

	    
	    for(j=0;j<M;j++)
			cout<<Max[i][j];
		    cout<<"      ";
		
		for(j=0;j<M;j++)
			cout<<Allocation[i][j];
			cout<<"      ";
		for(j=0;j<M;j++)
			cout<<Need[i][j];
			cout<<endl;
	}
}
int distribute( int i){

	for(int j=0;j<M;j++)
	{
		Available[j]=Available[j]-NRequest[j];
		Allocation[i][j]=Allocation[i][j]+NRequest[j];
		Need[i][j]=Need[i][j]-NRequest[j];
	}
	return T;


}

int Redistribute(int i) 
{ 
	for(int j=0; j<N; j++)
	{
		Available[j] = Available[j] + NRequest[j];
		Allocation[i][j] = Allocation[i][j] - NRequest[j];
		Need[i][j] = Need[i][j] + NRequest[j];
	}
	return T;
}
//安全性算法
int ifSafe(){

  int i,j,k=0,n,apply;
	//初始化work 
	for(j=0;j<M;j++)
        NWork[j] = Available[j];
    //初始化Finish 
    for(i=0;i<N;i++) 
    	NFinish[i] = F;
	//求安全序列 
	for(i=0;i<N;i++){ 
		apply=0;
		for(j=0;j<M;j++){
			if(NFinish[i]==F && Need[i][j]<=NWork[j])
			{   
				apply++;
			
				if(apply==M)
				{  
					for(n=0;n<M;n++)
				        NWork[n]=NWork[n]+Allocation[i][n];
					NFinish[i]=T;
					SafetyList[k++]=i;
					i=-1; 		
				}
			}
		}
	}
	
	for(i=0;i<N;i++){
		if(NFinish[i]==F){
			cout<<"系统不安全"<<endl;
			
			return F;
		}
	}
	cout<<"此系统是安全的"<<endl;
    cout<<"有一个安全序列:";

	for(i=0;i<N;i++)
	{
		cout<<"p"<<SafetyList[i];
	
		if(i<N-1) 
        cout<<"->";
			
	}
     cout<<endl;
	return T;
}
//资源分配算法
void Bank()
{
	int flag = T;
	int i,j;
    
	cout<<"请输入请求分配资源的进程号(0-"<<N-1<<"):";
	cin>>i;
    
	cout<<"请输入进程p"<<i<<"需要申请的资源个数:";
    
	
	for(j=0;j<M;j++)
	{   
		cout<<CName[j]<<" ";
	    cin>>NRequest[j];
		
	}
	
	//判断银行家算法的前两条件是否成立 
    for (j=0;j<M;j++)
	{
		if(NRequest[j]>Need[i][j])//判断申请是否大于需求，若大于则出错
		{   
			cout<<"进程p"<<i<<"申请的资源大于它需要的资源,不合理"<<endl;
		
			flag = F;
			break;
		}
		else 
		{
            if(NRequest[j]>Available[j])//判断申请是否大于当前可分配资源，若大于则出错
			{                         
			
				cout<<"进程p"<<i<<"申请的资源大于现在可利用的资源,不合理"<<endl;

				flag = F;
				break;
			}
		}
    }
   
    if(flag) {
		distribute(i); 
		display(); 
		if(!ifSafe()) //寻找安全序列
		{
			Redistribute(i);
			display();
		}
    }
}




