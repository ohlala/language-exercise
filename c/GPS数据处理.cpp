//$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50
#include<stdio.h>
#include<string.h>

int timetr(char *p)
{
	int a;
		a=(p[7]-'0')*10+(p[8]-'0');
	if(a>=8)
		a=a-8;
	else
		a=a-8+24;
	return a;	
 } 

int main()
{
	int i=1,f1,f2,time=0;
	char ch,date[80],flag[3];
	
	for( ;scanf("%c",&ch); ) //һ��һ�������ַ� 
	{	
		if(ch=='E')
			break;
		if(ch=='$')			//����$�ַ�ʱ��ʼд������date 
		{
			loop:	date[0]=ch;
			for( ;scanf("%c",&ch); )	//���������ַ�д������date 
			{
				date[i]=ch;
				i++;
				if(ch=='*')				//����*ֹͣ���벢��ʼ���벢ת��У��ֵ 
				{	
					scanf("%c",&flag[0]);
					scanf("%c",&flag[1]);
					flag[2]='\0';
					if (flag[0]>='A')
						f1=(flag[0]-'A'+10)*16;
					else
						f1=(flag[0]-'0')*16;
					if (flag[1]>='A')
						f1=+(flag[1]-'A'+10);
					else
						f1=+(flag[1]-'0');
					
					f2=date[1]^date[2];		//�������ֵ 
					for(int j=3;j<i-2;j++)	
						f2=f2^date[j];
					f2=f2%65536;
					
					if (f2==f1)   //ת��ʱ�� 
						time=timetr(date);
					break;
				}
				
				if(ch=='$')
					goto loop;    //���Ŷ����ֶ���$  ����ȥ������ 
				
			}
		} 
 
	}
	if(time>=10)
		printf("%d:%c%c:%c%c",time,date[9],date[10],date[11],date[12]);
	else
		printf("0%d:%c%c:%c%c",time,date[9],date[10],date[11],date[12]);
	return 0;
}
