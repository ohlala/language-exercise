//��д����ȥ���ַ����а����ķ���ĸ�ַ�(�������ո�)��
//����Сд��ĸת���ɴ�д��ĸ��
//ע�⣬���ں�����������������Ӧ���������н��С�
#include<iostream>
using namespace std;
void up(char s[]){
	int i = 0; 
	while (s[i]){
	    if (s[i] >= 'a' && s[i] <= 'z')
	    	s[i] = s[i] -32;
	      i++;
	}
	i = 0;
	while (s[i]){
	    if (s[i] == ' ' || (s[i] >= 'A' && s[i] <= 'Z'))
		    i++; 
	    else{
	    	for (int j = i; s[j] != '\0'; j++)
			    s[j] = s[j+1];
	    } 	
	} 
}

int main(){
	char arr[100];
	cin.getline(arr,100);
	up(arr);
	cout << arr;
	return 0;
} 

