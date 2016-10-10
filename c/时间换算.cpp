#include <stdio.h>
int main()
{
	int x,y,a,b;
	scanf("%d",&x);
	a=x/100;
	b=x%100;
	if(a>=8)
		a=a-8;
	else
		a=a-8+24;
	y=a*100+b;
	printf("%d",y);	
	return 0;
	
 } 
