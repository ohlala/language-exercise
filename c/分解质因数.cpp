#include<stdio.h>

int prime(int a )
{	int k;
	if (a==2)
		return 1;
	for (k = 2; k < (int)(sqrt(a)+1) ; k++) 
		if (a % k == 0) 
			return 0;
	return 1;		
}

int main()
{	int n,i;
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++)
	{	if(prime(i))
		{	if(prime(n))
			{	printf("%d",n);
				return 0;
			}
			if(n%i==0)
			{	printf("%dx",i);
				n=n/i;
				i--;
			}	
			
		}
	}
	return 0;
} 
