/*1.����kֵ������һ������Ϊ4^K�����飬���д洢������Ϊָ��Node��ָ�롣
2.��������DNA���У��˴����Ż��ռ䣩����ÿ��DNA����ת��Ϊkλ�Ľ�������
����Ľ�����ת��Ϊʮ���������˴����Ż��ռ䣬ÿ�����ж���Ҫһ��ת��������
ͨ���Ӽ�����ת��Ϊ��Ӧ�����±꣬����Node�洢������λ��
�����Ż��ռ䣬ÿ�δ洢���ݶ�Ҫ������ǰ��������
3.����Ҫ���ҵ�DNA���У�ת��Ϊ�Ľ�������ת��Ϊʮ����
���Ӽ�����ת��Ϊ��Ӧ�����±꣬���������������λ�á�*/ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<math.h>

typedef struct  node{						//����ṹ�� 
	int lin;
	int loc;
	struct node *next;
} Node;

int change10(int a);
int change4(FILE *p1,int k);
int change42(char *p2,int k);
int change43(FILE *p1,int k,int ind,int number);				//һ��DNA����תΪ�Ľ��� 

int main() 
{
	clock_t start1, finish1,start2, finish2;//ʱ�Ӵ����� 
	double  duration1,duration2; 			// �ܼ�ʱ�� 
	int save=0;								//���ٵĽڵ��� 
	
	FILE *fp = fopen("1000000.txt","r");  	//���ļ� 				///////////////////////////
	if(fp){   								//�ж��Ƿ�ɹ��� 
		printf("�ļ��򿪳ɹ�!\n");
	}
	else{
		printf("�ļ���ʧ��!\n");  
		return 0;
	}
	
	int k,k1,n;								//����kֵ 
	k=12;
	printf("�������kֵ�ǣ�%d\n",k);			
	printf("���ڽ������������Ժ�...");
	k1=k;
	if(k>8)
		k=8;

	int number=(pow(4,k));
	int number2=pow(10,k-1);
	Node *arr[number];					 
	for (int i=0;i<number;i++)				//����һ��ָ������������һ�������ϵĵ�һλ 	
		arr[i]=NULL;
	Node *arrl[number];					 
	for (int i=0;i<number;i++)				//����һ��ָ������������һ�������ϵ����һλ 	
		arrl[i]=arr[i];			

	start1 = clock();  						//������������ʱ1��ʼ 
	int line=1; 							//�����к�
	for(int j=0;j<1000000;j++){				//��ÿһ�� 	
	
		fseek(fp,45,SEEK_CUR);				//�ƶ���DNA���п�ʼ��λ�� ��-1Ϊ������ 
		char ch;
		do{
			fscanf(fp,"%c",&ch);		
		}while((ch!='A')&&(ch!='G')&&(ch!='C')&&(ch!='T'));
		fseek(fp,-2,SEEK_CUR);		
		
		int location=1; 								//��ÿ�еĵ�һ��DNA���������²���
				int ind1,ind2;							//����Ҫ�õ�ʮ���������Ľ����� 
				ind1=(change4(fp,k));					 
				ind2=change10(ind1);
				
				Node *q = (Node*)malloc(sizeof(Node));	//�����ڵ�洢���� 
					save+=1; 
					q->lin = line;
					q->loc = location;
					q->next = NULL ;	
				if(arrl[ind2])							//���ڵ��������
					{
						arrl[ind2]->next=q;
						arrl[ind2]=q;
					}else
					{
						arr[ind2]=q;
						arrl[ind2]=q;
					}
					location++;
					
					
		for(int i=0;i<100-k;i++)					//��ÿ�еĺ����DNA���������²��� 
		{	
			Node *q = (Node*)malloc(sizeof(Node));	//�����ڵ�洢���� 
			save+=1; 
			q->lin = line;
			q->loc = location;
			q->next = NULL ;	
			
			ind1=change43(fp,k,ind1,number2);		//���ڵ��������
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

    finish1 = clock();  										//����������ϣ���ʱ1���� 
    duration1 = (double)(finish1 - start1) / CLOCKS_PER_SEC;  	//��������ʱ ���ʱ��
    printf( "\n����������ϣ���ʱ%.3f��,�ڴ�%dMB\n", duration1,save*sizeof(Node)/1024/1024 );  				  
	
	if(k1<9)													//��kֵС��8�������·������� 
	{
		printf("������Ҫ��ѯ��DNA���У�����Ϊ%d��:\n",k);		
		char ar[k];												//����Ҫ���ҵ����� 
		for(int i=0;i<k;i++)									
			scanf("%c",&ar[i]);
		int index,b=0;
		
		start2 = clock(); 										 //�ҵ���Ӧ�����±� 
		b=change42(ar,k);
		index=change10(b);
		while (arr[index])										//������Ӧ���������� 
		{
			printf("��%d�У���%dλ\n",arr[index]->lin,arr[index]->loc);
			arr[index]=arr[index]->next;
		}

	}else{
		rewind(fp);
		k=k1;
	    printf("������Ҫ��ѯ��DNA���У�����Ϊ%d��:\n",k);
		char ar[k];
		for(int i=0;i<k;i++)
			scanf("%c",&ar[i]);
		int index,a=0,b=0;
		char ch;
		
		start2 = clock(); 
		index=change10(change42(ar,8));							//�ҵ���Ӧ�����±� 
		fseek(fp,45,SEEK_CUR);					
		while (arr[index])										//�������� 
		{
			a=arr[index]->lin-b;
			b=arr[index]->lin;
			for (int i=0;i<a-1;i++)								//���ļ�ָ���ƶ���ǰ��λ��Ӧ��λ�� 
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
		
			int flag=1;											//�жϰ�λ�Ժ��Ƿ�ƥ�� 
			for (int i=0;i<k1-8;i++)
			{
				char ch;
				fscanf(fp,"%c",&ch);
				if(ch!=ar[8+i])
					flag=0;
			}				
			if (flag==1	)										//ƥ���������� 
				printf("��%d�У���%dλ\n",arr[index]->lin,arr[index]->loc);
			arr[index]=arr[index]->next;
			fseek(fp,145,SEEK_CUR);	
			}

	}

		finish2 = clock(); 
		duration2 = (double)(finish2 - start2) / CLOCKS_PER_SEC;  //��������ʱ ���ʱ��
		printf("�������,��ʱ%.3f��",duration2); 
		system("pause");  

	return 0;
} 

int change4(FILE *p1,int k)				//ÿ�е�һ��DNA����תΪ�Ľ��� 
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

int change10(int a)					//�Ľ���תΪʮ���� 
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
 		
int change42(char *p2,int k)		//����ʱDNA����תΪ�Ľ��� 
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
int change43(FILE *p1,int k,int ind,int number)		//ÿ������DNA����תΪ�Ľ��� 
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
