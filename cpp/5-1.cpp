//��д�ַ�����ת����mystrrev���ú����Ĺ����ǽ�ָ���ַ����е��ַ�˳��ߵ�
//��ǰ��󣬺��ǰ����Ȼ���ٱ�д��������֤֮��ע�⣬�������Ӧ���������н��С�
//����ԭ��Ϊ void mystrrev(char str[]) 
#include<iostream>
#include<string>
using namespace std;
void mystrrev(char str[]);

int main(){
	char s1[101];
	cin.getline(s1,100);
	mystrrev(s1);
	cout << s1;
    return 0;
} 
void mystrrev(char str[]){
	int i = 0, j, temp;
//	j = strlen(str) - 1;
    for (j = 0; str[j] != '\0'; j++)
	    ;
	j--;
	while (i < j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
} 


