//编写一个函数，将表示数字的数值（1-12）转换成对应的英文名称（小写）。
//用户输入阿拉伯数字，程序输出对应数字的英文单词。要求必须使用指针数组完成。
#include<iostream>
using namespace std;
char *change(int n){
	char *number[]={     //这是一个形如 int a[] = {1, 2, 3, 4}; 的数组，注意格式 
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine",
		"ten",
		"eleven",
		"twelve"
	};
	return number[n];
}

int main() {
    int n;
    char* p;
	cin >> n;
	cout << change(n-1);  // 注意[]和（）的区别 
	return 0; 
} 
