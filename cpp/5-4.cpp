//编写函数去除字符串中包含的非字母字符(不包括空格)，
//并将小写字母转换成大写字母。
//注意，不在函数中输出。输入输出应在主函数中进行。
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

