//���û�����İ���������ת���ɶ�Ӧ���ڼ���Ӣ�ĵ���
//(monday,tuesday,wednesday,thursday,friday,saturday,sunday)��
//����1��ʾ"monday",����7��ʾ��sunday����
//����û���������ֲ���1~7֮�䣬��ʾ��Ϣ��invalid
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	switch (n){
		case 1:printf("monday\n");  break;
        case 2:printf("tuesday\n");   break;
        case 3:printf("wednesday\n");  break;
        case 4:printf("thursday\n");  break;
        case 5:printf("friday\n");  break;
        case 6:printf("saturday\n");  break;
        case 7:printf("sunday\n");  break;
        default:printf("invalid\n");
	}	
	return 0;
} 
