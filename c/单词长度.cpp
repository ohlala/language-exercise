#include<stdio.h>

int main()
{
	int len=0,i,arr[100],count=0;
	char word;
	scanf("%c",&word);
	if (word=='.')
		return 0;
	while(1)
	{
		len++;
		if (word==' ')
			if (len==1)
				len--;
			else
			{
				arr[count] = len-1;
				count++;
				len = 0;			
			}
		if (word == '.')
		{
			arr[count]=len-1;
			break;
		}	
		scanf("%c",&word);
	}
	for (i=0;i<count;i++)
		if (arr[i+1]!=0)
			printf("%d ",arr[i]);
		else 
		{
			printf("%d",arr[i]);
			return 0;
		}
	printf("%d",arr[count]);
	return 0;	
 } 
