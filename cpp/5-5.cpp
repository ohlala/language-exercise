//��д��������һ��Ӣ���ַ����еĵ��ʸ�����
//һ���500����ĸ��Ӣ���ַ���,���������ֺ������ַ�
//�������ܰ���һЩӢ�ı����ţ����š���㡢�ʺţ��������Ŷ�������ʱ����Ϊһ����
//�ʡ� ���ʼ���ܰ���һ�������ո�
#include<iostream>
using namespace std;
int count(char s[]){
	int num = 0, i = 0; 
	while (s[i]){
		if ((s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '?') 
		    && !(s[i-1] == ' ' || s[i-1] == ',' || s[i-1] == '.' || s[i-1] == '?')) 
	        num++;  
		i++; 
	}
	return num;
}

int main(){
	int num;
	char arr[500];
	cin.getline(arr,500);
	num = count(arr);
	cout << num;
	return 0;
} 
