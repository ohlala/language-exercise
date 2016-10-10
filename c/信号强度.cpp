#include<stdio.h>
int main()
{
	int a,x,y;
	scanf("%d",&a);
	y=a%10;
	x=a/10;
	
		
	if(y==1)
		printf("Faint signals, barely perceptible");
	if(y==2)
		printf("Very weak signals");
	if(y==3)
		printf("Weak signals");
	if(y==4)
		printf("Fair signals");
	if(y==5)
		printf("Fairly good signals");
	if(y==6)
		printf("Good signals");
	if(y==7)
		printf("Moderately strong signals");
	if(y==8)
		printf("Strong signals");
	if(y==9)
		printf("Extremely strong signals");
		
	printf(", ");
	
	if(x==1)
		printf("unreadable");
	if(x==2)
		printf("barely readable, occasional words distinguishable");
	if(x==3)
		printf("readable with considerable difficulty");
	if(x==4)
		printf("readable with practically no difficulty");
	if(x==5)
		printf("perfectly readable");
	
	printf(".");
	return 0;

}


