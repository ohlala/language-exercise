#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	int a;
	srand(time(NULL));
	a=rand()%160;
	printf("被抽中的号码是：%d\n",a);
	system("Pause");
	return 0;	 
} 
