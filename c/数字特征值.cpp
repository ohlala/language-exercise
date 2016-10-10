#include<stdio.h>
#include<math.h>
int main ()
{
	int n,x,y,i=1,sum=0;
	scanf("%d",&x);
	while(x!=0)
	{
		y=x%10;
		x=x/10;
		if(y%2==i%2)
			sum=sum+pow(2,i-1);
		i++; 
	}
	printf("%d",sum);
	return 0;
 } 
