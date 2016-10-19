//用户输入一个字符串，首尾有多余的空格，编写程序来去除这些多余的空格。要求必须使用指针来完成本题。
#include<iostream>

using namespace std;

char *deleteSpace(char*p){
	cout << &p << endl; 
	while(*p == ' ')
		p++;
    char *q = p;         //p q 要分清 
	while(*q != '#')
		q++;
	q--;
	while(*q == ' ')
	    q--;
	q++; 
	*q = '#';				// 对内容操作记得加*（） 
	q++; 
	*q = '\0';	
	return p; 
}
int main(){
	char *p;
	p = new char[100];
	cin.getline(p,100);
	cout << &p << endl;
	//deleteSpace(p);
	p = deleteSpace(p);
	cout << p; 
	return 0;
}

