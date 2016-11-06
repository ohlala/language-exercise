#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x;
	int a, b, c, d, e;	
	cin >> x;
	a = x / 50, x %= 50;
	b = x / 20, x %= 20;
	c = x / 10, x %= 10;
	d = x / 5, x %= 5;
	e = x;
	cout << a << " " << b << " " << c
	    << " " << d << " " << e;
	return 0;
}
