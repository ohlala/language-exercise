#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// function "jucode", to get the check code by ^.
//function "getcode",to get the check code that given.
int jucode(char data[]); //����������ȡ��У���� 
int getcode(char data[]); //ȡ�������ṩ��У����

int main(void){
	 char goodData[100]; //��Ŷ�λ����ȷ������ 
	 char data[150];//�����������ݡ�
			 //do-while,�ҳ���λ�ҽ�����ȷ�����ݣ�����goodData. 
	 do{
		gets(data);// �������ݡ� 
		if (data[0]=='$' && data[1]=='G'&& data[2]=='P'&& data[3]=='R' &&data[4]=='M' &&data[5]=='C')
		{ 
			//��ǰ����ַ�Ϊ�������ų��Ƿ����� 
			 
			//if (data[18]=='A') { ע�⣡����һ����ؼ�����������������Ͳ�ͨ����һ��Ҫȥ���������ǵ�������������ʦ�̵ģ���������ʦ��������������ʦ�̵ģ�
			/*"��ĳ���Ҫ�����ҳ�$GPRMC��䣬����У��ͣ��ҳ�����У����ȷ�������ֶ�2��ʾ�Ѷ�λ����䣬���м����ʱ�䣬����ɱ���ʱ�䡣
			һ�������л��������$GPRMC��䣬�����һ�����õ��ı���ʱ����Ϊ��������",�ѵ������仰��û���ԡ���λ����Ϊǰ����������˼�� 
			*/
			int code=jucode(data); //����jucode���������У���롣 
			int givenCode=getcode(data);//����getcode,�ó������������λУ���벢ת��Ϊ10���ơ� 
			if (code==givenCode)
			{
				strcpy(goodData,data);
			}
		}
		// }
	 }  while (data[0]!='E' && data[1]!='N'&& data[2]!='D');
	 
	 //deal with time
	if (strlen(goodData)!=0)
	{	  
		char time[7];
		int i;
		for (i=7;i<13;i++)
		{
		time[i-7]=goodData[i];
		}
		char hc[3]={hc[0]=time[0], hc[1]= time[1]};
		char mc[3]={mc[0]=time[2],mc[1]=time[3]};
		char sc[3]={sc[0]=time[4],sc[1]=time[5]};
		int h,m,s;
		h=atoi(hc);
		m=atoi(mc);
		s=atoi(sc);
		//deal with hour
		h=h+8;
		if (h>24){
			h=h-24;
		}
	 	if (h<10)
		 {
			printf("0%d:",h);
	 	 } 
		else
		{
			printf("%d:",h);
		}
		//deal with minute
		if (m<10){
			printf("0%d:",m);
	  	} else {
			printf("%d:",m);
		}
	  //deal with second
		if (s<10){
			printf("0%d",s);
		} else {
			printf("%d",s);
		}
	}	  
	 return 0;
}
	
int jucode(char data[]){ //���������㣬�ó�10λ��У���� 
	 long length;
	 length=strlen(data);
	 int i;
	 int sum;
	 sum=data[1]^data[2];
	 for (i=3;i<length-3;i++) {
	  sum=sum^data[i];
	 }
	 sum=sum%65536;
	 return sum;
}

int getcode(char data[]){ //��ȡ�����λУ���� ��ת��Ϊ10������ֵ�� 
	 int length;
	 length=strlen(data);
	 char judge[3]={data[length-2],data[length-1]};
	 // to transfer judge code to int base 16
	 long judge2;
	 char *stop;
	 judge2=strtol(judge,&stop,16);
	 return judge2;
}
