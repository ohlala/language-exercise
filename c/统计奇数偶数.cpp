#include<stdio.h>
 int main()
 {
 	int a,i,jishu=0,oushu=0;
 	scanf("%d",&a);
 	while(a!=-1)
	{	if(a%2==0)
			oushu++;
		else 
			jishu++;
		scanf("%d",&a);	
	}
	printf("%d %d",jishu,oushu);
 	
 }
