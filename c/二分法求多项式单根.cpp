#include<stdio.h> 
float a0,a1,a2,a3;

float f (float x)
{

	x=((((a0*x)+a1)*x)+a2)*x+a3;
	return x;
}

int main()
{
	float a,b,x,y;
	scanf("%f %f %f %f",&a0,&a1,&a2,&a3);
	scanf("%f %f",&a,&b);
	

	x=(a+b)/2;
	while(b-a>0.001)
	{
		if(f(a)*f(x)<0)
			b=x;
		else if(f(b)*f(x)<0)
			a=x;
		else 
			break;
		x=(a+b)/2;
	}
	
	if(f(a)==0)
		printf("%.2f",a);
	else if (f(b)==0)
		printf("%.2f",b);
	else 
		printf("%.2f",x);
	
	return 0;	
}

