#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	int a;
	srand(time(NULL));
	a=rand()%160;
	printf("�����еĺ����ǣ�%d\n",a);
	system("Pause");
	return 0;	 
} 
