#include<stdio.h>

int main ()
{
	int arr[101]={0};
	int i,mi,xi;
	int flag=0;
	
	do		//��һ������ʽ 
	{	scanf("%d %d",&mi,&xi);
		arr[mi]+=xi;
	}while(mi!=0);
	
	do		//���ϵڶ�������ʽ��ϵ�� 
	{	scanf("%d %d",&mi,&xi);
		arr[mi]+=xi;
	}while(mi!=0);
	
	for(i=100;i>1;i--)
		if (arr[i]!=0)
			flag=1;
			
	if(flag==1)	//����ָ������һ����ʱ 
	{		
		for(i=100;i>1;i--)		//�����һ���� 
		{
			if(arr[i]!=1&&arr[i]!=-1)
			{	
				if (arr[i]!=0)
				{	printf("%dx%d",arr[i],i);
					break;
				}
			}
			else if(arr[i]==1)
			{	printf("x%d",i);
				break;
			}
			else if(arr[i]==-1)
			{	printf("-x%d",i);
				break;
			}				
		}
		
		i--;
		
		for(;i>1;i--)		//����ڶ����ָ��Ϊ2���� 
		{	
			if(arr[i]!=1&&arr[i]!=-1)
			{	
				if (arr[i]>0)
					printf("+%dx%d",arr[i],i);
				else if (arr[i]<0)
					printf("%dx%d",arr[i],i);
			}
			else if(arr[i]==1)
				printf("+x%d",i);
			else if(arr[i]==-1)
				printf("-x%d",i);
		}
		
		if(arr[i]!=1||arr[i]!=-1)			//�����ָ��Ϊ1���� 
		{	
			if (arr[1]>0)	
				printf("+%dx",arr[1]);
			else if (arr[1]<0)
				printf("%dx",arr[1]);	
		} 
		else if(arr[i]==1)
			printf("+x");
		else if(arr[i]==-1)
			printf("-x");
							
		if (arr[0]>0)		//�����ָ��Ϊ0���� 
				printf("+%d",arr[0]);
		else if (arr[0]<0)
				printf("%d",arr[0]);
		return 0;
	}
	else if(arr[1]!=0) //��ָ�����Ϊ1ʱ 
	{	
		if(arr[i]!=1||arr[i]!=-1)	//�����ָ��Ϊ1���� 
		{	
			printf("%dx",arr[1]);
		} 
		else if(arr[i]==1)
			printf("x");
		else if(arr[i]==-1)
			printf("-x");
							
		if (arr[0]>0)		//�����ָ��Ϊ0���� 
				printf("+%d",arr[0]);
		else if (arr[0]<0)
				printf("%d",arr[0]);	
				
		return 0;
	}		
	else if(arr[0]!=0)	//��ָ�������Ϊ0ʱ 
	{
		if (arr[0]>0)		//�����ָ��Ϊ0���� 
				printf("%d",arr[0]);
		else if (arr[0]<0)
				printf("%d",arr[0]);	
		return 0;
	}
	else 	//ֻ��0ʱ 
		printf("%d",arr[100]);		
	return 0;	
 } 
