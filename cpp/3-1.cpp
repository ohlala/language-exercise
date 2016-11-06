#include<iostream> 
using namespace std;

int main(){
	char a, b, c;
	cin >> b;
    a = b - 1;
    c = b + 1;
	if (b == 'a')
		a = 'z';
	if (b == 'A')
	    a = 'Z';
	if (b == 'z')
	    c = 'a';
	if (b == 'Z')
		c = 'A';
	cout << a << b << c;
	return 0;
} 
