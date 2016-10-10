#include<stdio.h> 
#include<math.h>

int main()
{
	int n,i,temp=0,max=0-1,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int begin=a[0],end=a[n-1];
	for(i=0;i<n;i++)
	{	sum+=a[i];
		if(sum>max)
		{
			max=sum;
			end=a[i];
			begin=a[temp];
		}		
		if(sum<0)
		{
			sum=0;
			temp=i+1;
		}					
	}
	if(max==-1)
	{
		begin=a[0];
		end=a[n-1];
		max=0;	
	}
	printf("%d %d %d",max,begin,end);
	return 0;
}

