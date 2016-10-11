/*1.读入k值，建立一个长度为4^K的数组，其中存储的内容为指向Node的指针。
2.遍历所有DNA序列（此处有优化空间），将每个DNA序列转化为k位四进制数，
这个四进制数转化为十进制数（此处有优化空间，每个序列都需要一次转化？），
通过加减常数转化为对应数组下标，建立Node存储该序列位置
（有优化空间，每次存储数据都要遍历当前链表？）。
3.读入要查找的DNA序列，转化为四进制数，转化为十进制
，加减常数转化为对应数组下标，遍历数组输出所有位置。*/ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<math.h>

typedef struct  node{						//定义结构体 
	int lin;
	int loc;
	struct node *next;
} Node;

int change10(int a);
int change4(FILE *p1,int k);
int change42(char *p2,int k);
int change43(FILE *p1,int k,int ind,int number);				//一个DNA序列转为四进制 

int main() 
{
	clock_t start1, finish1,start2, finish2;//时钟打点变量 
	double  duration1,duration2; 			// 总计时间 
	int save=0;								//开辟的节点数 
	
	FILE *fp = fopen("1000000.txt","r");  	//打开文件 				///////////////////////////
	if(fp){   								//判断是否成功打开 
		printf("文件打开成功!\n");
	}
	else{
		printf("文件打开失败!\n");  
		return 0;
	}
	
	int k,k1,n;								//定义k值 
	k=12;
	printf("您定义的k值是：%d\n",k);			
	printf("正在建立索引，请稍候...");
	k1=k;
	if(k>8)
		k=8;

	int number=(pow(4,k));
	int number2=pow(10,k-1);
	Node *arr[number];					 
	for (int i=0;i<number;i++)				//建立一个指针数组来保存一个链表上的第一位 	
		arr[i]=NULL;
	Node *arrl[number];					 
	for (int i=0;i<number;i++)				//建立一个指针数组来保存一个链表上的最后一位 	
		arrl[i]=arr[i];			

	start1 = clock();  						//建立索引，计时1开始 
	int line=1; 							//定义行号
	for(int j=0;j<1000000;j++){				//对每一行 	
	
		fseek(fp,45,SEEK_CUR);				//移动到DNA序列开始的位置 （-1为不动） 
		char ch;
		do{
			fscanf(fp,"%c",&ch);		
		}while((ch!='A')&&(ch!='G')&&(ch!='C')&&(ch!='T'));
		fseek(fp,-2,SEEK_CUR);		
		
		int location=1; 								//对每行的第一个DNA序列做如下操作
				int ind1,ind2;							//定义要用的十进制数和四进制数 
				ind1=(change4(fp,k));					 
				ind2=change10(ind1);
				
				Node *q = (Node*)malloc(sizeof(Node));	//建立节点存储数据 
					save+=1; 
					q->lin = line;
					q->loc = location;
					q->next = NULL ;	
				if(arrl[ind2])							//将节点放入链表
					{
						arrl[ind2]->next=q;
						arrl[ind2]=q;
					}else
					{
						arr[ind2]=q;
						arrl[ind2]=q;
					}
					location++;
					
					
		for(int i=0;i<100-k;i++)					//对每行的后面的DNA序列做如下操作 
		{	
			Node *q = (Node*)malloc(sizeof(Node));	//建立节点存储数据 
			save+=1; 
			q->lin = line;
			q->loc = location;
			q->next = NULL ;	
			
			ind1=change43(fp,k,ind1,number2);		//将节点放入链表
			ind2=change10(ind1);	
			
			if(arrl[ind2])
			{
				arrl[ind2]->next=q;
				arrl[ind2]=q;
			}else
			{
				arr[ind2]=q;
				arrl[ind2]=q;
			}
			location++;		
		}	
		line++; 
		fseek(fp,2,SEEK_CUR);
	}

    finish1 = clock();  										//索引建立完毕，计时1结束 
    duration1 = (double)(finish1 - start1) / CLOCKS_PER_SEC;  	//计算总用时 输出时间
    printf( "\n建立索引完毕，用时%.3f秒,内存%dMB\n", duration1,save*sizeof(Node)/1024/1024 );  				  
	
	if(k1<9)													//对k值小于8的用如下方法查找 
	{
		printf("请输入要查询的DNA序列（长度为%d）:\n",k);		
		char ar[k];												//读入要查找的数据 
		for(int i=0;i<k;i++)									
			scanf("%c",&ar[i]);
		int index,b=0;
		
		start2 = clock(); 										 //找到对应数组下标 
		b=change42(ar,k);
		index=change10(b);
		while (arr[index])										//遍历对应链表输出结果 
		{
			printf("第%d行，第%d位\n",arr[index]->lin,arr[index]->loc);
			arr[index]=arr[index]->next;
		}

	}else{
		rewind(fp);
		k=k1;
	    printf("请输入要查询的DNA序列（长度为%d）:\n",k);
		char ar[k];
		for(int i=0;i<k;i++)
			scanf("%c",&ar[i]);
		int index,a=0,b=0;
		char ch;
		
		start2 = clock(); 
		index=change10(change42(ar,8));							//找到对应数组下标 
		fseek(fp,45,SEEK_CUR);					
		while (arr[index])										//遍历链表 
		{
			a=arr[index]->lin-b;
			b=arr[index]->lin;
			for (int i=0;i<a-1;i++)								//将文件指针移动到前八位对应的位置 
			{
				do{
					fscanf(fp,"%c",&ch);		
				}while((ch!='A')&&(ch!='G')&&(ch!='C')&&(ch!='T'));
				fseek(fp,107,SEEK_CUR);		
			}
				do{
					fscanf(fp,"%c",&ch);		
				}while((ch!='A')&&(ch!='G')&&(ch!='C')&&(ch!='T'));	
				fseek(fp,-2,SEEK_CUR);	
				
			fseek(fp,arr[index]->loc+7,SEEK_CUR);
		
			int flag=1;											//判断八位以后是否匹配 
			for (int i=0;i<k1-8;i++)
			{
				char ch;
				fscanf(fp,"%c",&ch);
				if(ch!=ar[8+i])
					flag=0;
			}				
			if (flag==1	)										//匹配则输出结果 
				printf("第%d行，第%d位\n",arr[index]->lin,arr[index]->loc);
			arr[index]=arr[index]->next;
			fseek(fp,145,SEEK_CUR);	
			}

	}

		finish2 = clock(); 
		duration2 = (double)(finish2 - start2) / CLOCKS_PER_SEC;  //计算总用时 输出时间
		printf("查找完毕,用时%.3f秒",duration2); 
		system("pause");  

	return 0;
} 

int change4(FILE *p1,int k)				//每行第一个DNA序列转为四进制 
{	
	int a,b=0;
	char ch; 
	for (int i=0;i<k;i++)
	{	
		fscanf(p1,"%c",&ch);  				 
		if(ch=='A')
			a=0;				 
		if(ch=='G')
			a=1;	 
		if(ch=='C')
			a=2;	 
		if(ch=='T')
			a=3;
		b=b*10+a;
	}
	return b; 
}

int change10(int a)					//四进制转为十进制 
{
	int b=0,x=1,y;
	while(a!=0)
	{	
		b+=(a%10)*x;
		a=a/10;
		x=4*x;		
	}
	return b;
 } 
 		
int change42(char *p2,int k)		//查找时DNA序列转为四进制 
{	
	int a,b=0;
	char ch; 
	for (int i=0;i<k;i++)
	{	  				 
		if(*p2=='A')
			a=0;				 
		if(*p2=='G')
			a=1;	 
		if(*p2=='C')
			a=2;	 
		if(*p2=='T')
			a=3;
		b=b*10+a;
		p2++;
	}
	return b; 
}
int change43(FILE *p1,int k,int ind,int number)		//每行其他DNA序列转为四进制 
{	
	int a,b=0;
	char ch; 
		fscanf(p1,"%c",&ch);  				 
		if(ch=='A')
			a=0;				 
		if(ch=='G')
			a=1;	 
		if(ch=='C')
			a=2;	 
		if(ch=='T')
			a=3;
	b=ind%number*10+a;
	return b; 
}
