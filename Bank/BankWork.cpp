#include"BankHeader.h"
using namespace std;
int main(){

int altertive;
  

	
	do{
	

		cout<<"\t-------------------���м���Դ�����㷨------------------"<<endl;
		cout<<"                     1:��Դ���� "<<endl;	
		cout<<"                     2:����������߳�ʼ������       "<<endl;
		cout<<"                     0:�˳�       "<<endl;
		cout<<"\t-------------------------------------------------------"<<endl;
		cout<<"��ѡ��";
		cin.sync; //�ͷŻ�����
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

						cout<<"ϵͳ����ȫ,�����˳�"<<endl;
						
					}
					break;
				}
			case 0:
			
				exit(0);
			default: cout<<"�������";break;
		}
	} while(altertive);



system("pause");

return 0;
}
void initAll(){

   int i,j,m,n;// n ����  m��Դ
   int number, sign;
   char name ;
   int distributed[50]={0};//�Ѿ��������Դ

	//��ʼ��ϵͳ��Դ��Ŀ������Դ���Ը��� 
   cout<<"ϵͳ������Դ����Ϊ:"<<endl;
   cin>>m;

	M=m;
	for(i=0;i<m;i++)
	{   
        cout<<"��Դ"<<i<<"������:";
        cin.sync();
	    cin>>name;	
		CName[i]=name;
		cout<<"��Դ"<< name <<"�ĳ�ʼ����(��Դ�Ŀ��ü��ѷ������Դ��Ϊ:";
	    cin>>number;	
	
		Available[i]=number;
	}
	
	//��ʼ�������̵�����������
	cout<<endl;
	cout<<"��������̵�����:";
	cin>>n;	
	
	N=n;
	cout<<"����������̵������������ֵ:"<<endl;

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
			cout<<"��Դ�������������ϵͳ����Դ�����������������!"<<endl;
									
	} while(sign);
	
			
	//��ʼ���������Ѿ��������Դ��������û���Ҫ����Դ�� 
	do{
		sign=F;
		cout<<"������������Ѿ��������Դ��:"<<endl;
	
		for(i=0;i<N;i++)
		{
			for(j=0;j<M;j++)
		  	{
				cin>>Allocation[i][j];
			
				if(Allocation[i][j]>Max[i][j])  
					sign=T;				
				Need[i][j]=Max[i][j]-Allocation[i][j];
				distributed[j]+=Allocation[i][j];//ͳ���Ѿ���������̵���Դ��Ŀ
		  	}
		}
		if(sign)
			cout<<"�������Դ���������������������!"<<endl;
					
	}while(sign);
	
	//�����õ���Դ�� 
	for(j=0;j<M;j++)
		Available[j]=Available[j]-distributed[j];
}

void display()
{
	int i,j;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"ϵͳĿǰ���õ���Դ   Available:"<<endl;
	
	for(i=0;i<M;i++)
		cout<<CName[i];
        cout<<endl;
	for(j=0;j<M;j++)
		cout<<Available[j];
        cout<<endl;
    cout<<"ϵͳ��ǰ����Դ����������£�"<<endl;
	cout<<"*******Allocation******Max******Need"<<endl;
	cout<<"������  ";

  //��ӡ��Դ����
	for(j=0;j<3;j++){
		for(i=0;i<N;i++)
			cout<<CName[i];
			cout<<"      ";	
	}
	cout<<endl;
	
	//��ӡÿ�����̵�Allocation��Max��Need 
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
//��ȫ���㷨
int ifSafe(){

  int i,j,k=0,n,apply;
	//��ʼ��work 
	for(j=0;j<M;j++)
        NWork[j] = Available[j];
    //��ʼ��Finish 
    for(i=0;i<N;i++) 
    	NFinish[i] = F;
	//��ȫ���� 
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
			cout<<"ϵͳ����ȫ"<<endl;
			
			return F;
		}
	}
	cout<<"��ϵͳ�ǰ�ȫ��"<<endl;
    cout<<"��һ����ȫ����:";

	for(i=0;i<N;i++)
	{
		cout<<"p"<<SafetyList[i];
	
		if(i<N-1) 
        cout<<"->";
			
	}
     cout<<endl;
	return T;
}
//��Դ�����㷨
void Bank()
{
	int flag = T;
	int i,j;
    
	cout<<"���������������Դ�Ľ��̺�(0-"<<N-1<<"):";
	cin>>i;
    
	cout<<"���������p"<<i<<"��Ҫ�������Դ����:";
    
	
	for(j=0;j<M;j++)
	{   
		cout<<CName[j]<<" ";
	    cin>>NRequest[j];
		
	}
	
	//�ж����м��㷨��ǰ�������Ƿ���� 
    for (j=0;j<M;j++)
	{
		if(NRequest[j]>Need[i][j])//�ж������Ƿ�������������������
		{   
			cout<<"����p"<<i<<"�������Դ��������Ҫ����Դ,������"<<endl;
		
			flag = F;
			break;
		}
		else 
		{
            if(NRequest[j]>Available[j])//�ж������Ƿ���ڵ�ǰ�ɷ�����Դ�������������
			{                         
			
				cout<<"����p"<<i<<"�������Դ�������ڿ����õ���Դ,������"<<endl;

				flag = F;
				break;
			}
		}
    }
   
    if(flag) {
		distribute(i); 
		display(); 
		if(!ifSafe()) //Ѱ�Ұ�ȫ����
		{
			Redistribute(i);
			display();
		}
    }
}




