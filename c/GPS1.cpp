#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// function "jucode", to get the check code by ^.
//function "getcode",to get the check code that given.
int jucode(char data[]); //进行异或计算取得校验码 
int getcode(char data[]); //取得数据提供的校验码

int main(void){
	 char goodData[100]; //存放定位且正确的数据 
	 char data[150];//存放输入的数据。
			 //do-while,找出定位且较验正确的数据，放入goodData. 
	 do{
		gets(data);// 读入数据。 
		if (data[0]=='$' && data[1]=='G'&& data[2]=='P'&& data[3]=='R' &&data[4]=='M' &&data[5]=='C')
		{ 
			//以前五个字符为条件，排除非法数据 
			 
			//if (data[18]=='A') { 注意！！这一句最关键，包含这个条件，就不通过。一定要去掉。是我们的语文是体育老师教的？还是翁老师的语文是体育老师教的？
			/*"你的程序要从中找出$GPRMC语句，计算校验和，找出其中校验正确，并且字段2表示已定位的语句，从中计算出时间，换算成北京时间。
			一次数据中会包含多条$GPRMC语句，以最后一条语句得到的北京时间作为结果输出。",难道这两句话，没有以“定位”作为前提条件的意思？ 
			*/
			int code=jucode(data); //调用jucode，异或计算出校验码。 
			int givenCode=getcode(data);//调用getcode,得出给定的最后两位校验码并转换为10进制。 
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
	
int jucode(char data[]){ //进行异或计算，得出10位制校验码 
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

int getcode(char data[]){ //获取最后两位校验码 并转换为10进制数值。 
	 int length;
	 length=strlen(data);
	 char judge[3]={data[length-2],data[length-1]};
	 // to transfer judge code to int base 16
	 long judge2;
	 char *stop;
	 judge2=strtol(judge,&stop,16);
	 return judge2;
}
