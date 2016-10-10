#include<stdio.h>
int main()
{
	int i=0,j,a[2000],b[2000],c[2000],d[2000],flag=0;
	while(scanf("%d %d",&a[i],&b[i])!=EOF)
		{
		i++;			
		}
	for(j=0;j<i;j++)
	
		{
		c[j]=a[j]*b[j];
		d[j]=b[j]-1;
 		}
	for(j=0;j<i;j++) 
		if(d[j]!=-1)
			{if (flag==1)
				printf(" ");
			printf("%d %d",c[j],d[j]);
			flag=1;
			}
	if(!flag)
		printf("0 0");		
	return 0;
		
}



