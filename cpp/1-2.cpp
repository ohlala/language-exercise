#include<iostream>
using namespace std;

int main(){
	char name[50];
//    cin.getline(char array[], int size, delimitChar);
//    ����ָ���ָ��������Ѿ�����size-1���ַ�ʱֹͣĬ�Ϸָ���Ϊ��'\n'���� 
	cin.getline(name,50); 			
	cout<<"Hello "<<name<<".";
	return 0;
} 
