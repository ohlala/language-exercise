#include<stdio.h>

int main() 
{
	int n,i,j,k;
	int max,maxi,maxj,flag=1;
	scanf("%d",&n);
	int arr[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	for(i=0;i<n;i++)	
	{	
		max=arr[i][0];			//find the max munber in arr[i]
		for(j=0;j<n;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				//maxi=i;
				maxj=j;
			}		
		}
		for(k=0;k<n;k++)
		{	flag=1;
			if(arr[i][maxj]>arr[k][maxj])
			{	flag=0;
				break;
			}
		}	
		if(flag==1)
			break;	
	}
	
	if (flag==0)
		printf("NO");
	else 
		printf("%d %d",i,maxj);
	
	return 0;
	
}
