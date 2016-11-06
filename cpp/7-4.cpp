#include<iostream>
using namespace std;
void caesar(char s[]){
	for (int i = 0; s[i] != '\0'; i++)
		if(s[i] >= 97){
			s[i] -= 32;
			s[i] += 3;
			s[i] = (s[i] > 90)? s[i] - 26 : s[i];
		}
		else{
			s[i] += 32;
			s[i] += 3;
			s[i] = (s[i] > 122)? s[i] - 26 : s[i];
		}
}
void oddeven(char s[]){
	char a[100],b[100];
	int  i, j = 0, k = 0;
	for (int i = 0; s[i]; i++){
		if (i % 2 == 0){
			a[j] = s[i];
			j++;
		}else{
			b[k] = s[i];
			k++;
		}
	}
	a[j] = '\0';
	b[k] = '\0';
	for (int i = 0; a[i]; i++){
		s[i] = a[i];
	}
	for (int i = 0; b[i]; i++){
		s[j + i] = b[i];
	}
	s[j+k] = '\0';
}
//形参为指向函数的指针，对应实参可为相应格式的函数名。
//第一个char s[]表示函数指针指向的函数接受的类型是char s[]
//第二个char s[]表示cipher函数接受的一个char s[]
//函数体中 	(*f)(s)等价于caesar(arr) 或 oddeven(arr) 
void cipher(void (*f)(char s[]),char s[]){
	(*f)(s);
}

int main(){
	int  n;
	char arr[100];
	cin.getline(arr,100);
	cin >> n;
	void (*f)(char s[]);	//声明一个函数指针 
	if (n == 1)
	    f = caesar;		//求使用函数指针来切换加密函数,f指向函数名 
	else
	    f = oddeven;
	cipher(f, arr);
	cout << arr;
	return 0;
}
