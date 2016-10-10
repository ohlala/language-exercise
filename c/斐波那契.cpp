#include<stdio.h>

int f(int a)
{	if(a==1)
		return 1;
	if(a==2)
		return 2;
	return f(a-2)+f(a-1);		
}
		
int main ()
{
	printf("%d",f(6));
} 
