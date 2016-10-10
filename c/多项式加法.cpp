#include<stdio.h>

int main ()
{
	int arr[101]={0};
	int i,mi,xi;
	int flag=0;
	
	do		//第一个多项式 
	{	scanf("%d %d",&mi,&xi);
		arr[mi]+=xi;
	}while(mi!=0);
	
	do		//加上第二个多项式的系数 
	{	scanf("%d %d",&mi,&xi);
		arr[mi]+=xi;
	}while(mi!=0);
	
	for(i=100;i>1;i--)
		if (arr[i]!=0)
			flag=1;
			
	if(flag==1)	//有幂指数大于一的项时 
	{		
		for(i=100;i>1;i--)		//输出第一个项 
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
		
		for(;i>1;i--)		//输出第二项到幂指数为2的项 
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
		
		if(arr[i]!=1||arr[i]!=-1)			//输出幂指数为1的项 
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
							
		if (arr[0]>0)		//输出幂指数为0的项 
				printf("+%d",arr[0]);
		else if (arr[0]<0)
				printf("%d",arr[0]);
		return 0;
	}
	else if(arr[1]!=0) //幂指数最大为1时 
	{	
		if(arr[i]!=1||arr[i]!=-1)	//输出幂指数为1的项 
		{	
			printf("%dx",arr[1]);
		} 
		else if(arr[i]==1)
			printf("x");
		else if(arr[i]==-1)
			printf("-x");
							
		if (arr[0]>0)		//输出幂指数为0的项 
				printf("+%d",arr[0]);
		else if (arr[0]<0)
				printf("%d",arr[0]);	
				
		return 0;
	}		
	else if(arr[0]!=0)	//幂指数最大项为0时 
	{
		if (arr[0]>0)		//输出幂指数为0的项 
				printf("%d",arr[0]);
		else if (arr[0]<0)
				printf("%d",arr[0]);	
		return 0;
	}
	else 	//只有0时 
		printf("%d",arr[100]);		
	return 0;	
 } 
