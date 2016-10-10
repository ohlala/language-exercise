#include<stdio.h>
#include<string.h>

int main()
{
	int count=0,len,arr[10]={0};
	char a[20];
	char c;
	for (int i=0;i<20;i++)
		scanf("%c",&a[i]);
	for (int i = 0;i<20;i++)
	{
		c=a[i];
		if(c==' '||c=='\t'||c=='\n'||c=='\r'||c==','||c=='.'||c=='?'||c=='\"'||c=='"'||c==':'||c=='('||c==')')
		{
			if(len!=0)
			{
				count++;
				arr[len-1]++;
				len = 0;
			}
		}
		else
			len++;
		
	}
	printf("%d ",count);
	for (int i=0;i<9;i++)
		printf("%d ",arr[i]);
	printf("%d",arr[9]);
return 0;
} 
