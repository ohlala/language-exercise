#include<stdio.h>
#include<math.h>
void pri(int n)
{
	switch (n)
	{
		case 1: printf("yi");
				break;
		case 2: printf("er");
				break;
		case 3: printf("san");
				break;	
		case 4: printf("si");
				break;
		case 5: printf("wu");
				break;
		case 6: printf("liu");
				break;
		case 7: printf("qi");
				break;
		case 8: printf("ba");
				break;
		case 9: printf("jiu");
				break;
		case 0: printf("ling");
				break;

	}
}

int main ()
{
	int a[10],i,m;
	scanf("%d",&m);
	if (m<0)
	{
		printf("fu ");
		m=-1*m;
	}
	for(i=0;;i++)
	{
		a[i]=m%10;
		m=m/10;
		if (m==0)
			break;		
	}
	for(;i>0;i--)
	{
		pri(a[i]);
		printf(" ");
	}		
	pri(a[0]);
	return 0;
	
}
