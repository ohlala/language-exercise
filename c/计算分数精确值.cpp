#include <stdio.h>
int main()
{
	int i,a,b,arr[200];
	scanf("%d/%d",&a,&b);
//	printf("%d %d",a,b);
	
	printf("%d.",a/b);
	a = a % b;
	for(i=0;i<200;i++)
	{
		a = a*10;	
		printf("%d",a/b);
		a = a % b;
		if (a==0)
			break;
	}
	printf("\n");
	return 0;
}

