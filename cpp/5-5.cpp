//编写函数计算一个英文字符串中的单词个数。
//一个最长500个字母的英文字符串,不包含数字和特殊字符
//，但可能包含一些英文标点符号（逗号、句点、问号）。标点符号独立出现时不视为一个单
//词。 单词间可能包含一个或多个空格。
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
