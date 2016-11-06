//编写字符串反转函数mystrrev，该函数的功能是将指定字符串中的字符顺序颠倒
//（前变后，后变前）。然后再编写主函数验证之。注意，输入输出应在主函数中进行。
//函数原型为 void mystrrev(char str[]) 
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


