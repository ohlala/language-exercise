#include<stdio.h>
#include<math.h>

int wanshuhe(int a)
{	int k,sum=1;
	
	for (k = 2;k<(int)(sqrt(a)+1);k++) 
		if (a % k == 0) 
		{
			sum=sum + k ;
			if (k*k!=a)
				sum+=a/k;	
		}
	return sum;		
}

int main()
{	int n,m,i;
	scanf("%d%d",&n,&m);
	if(1==n)
		n++;
		
		
	for(i=n;i<=m;i++)
	{	if(wanshuhe(i)==i)
		{	printf("%d",i);	
			break;	
		}
	}
	i++; 
	for(;i<=m;i++)
	{	if(wanshuhe(i)==i)
		{	printf(" %d",i);				
		}
	}
	return 0;
} 
