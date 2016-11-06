//恺撒加密法加密规则是：将原来的小写字母用字母表中其后面的第3个字母的大写形式来替换，
//大写字母按同样规则用小写字母替换，对于字母表中最后的三个字母，可将字母表看成是首未衔接的。
//如字母c就用F来替换，字母y用B来替换，而字母Z用c代替。编程实现以下功能：输入一个字符串，将其加密后输出。
//程序运行结果如下：
//AMDxyzXYZ
//dpgABCabc
#include<iostream>
using namespace std;

int main(){
	char arr[21];
	cin >> arr;		//可以直接输入输出字符数组 
	for (int i = 0; arr[i] != '\0'; i++){
		if(arr[i] >= 97){
			arr[i] -= 32;
			arr[i] += 3;
			arr[i] = (arr[i] > 90)? arr[i] - 26 : arr[i];
		}
		else{
			arr[i] += 32;
			arr[i] += 3;
			arr[i] = (arr[i] > 122)? arr[i] - 26 : arr[i];
		}
		
	}
	cout << arr;
	return 0;
} 
