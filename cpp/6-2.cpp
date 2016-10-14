#include <iostream>
#include <cmath>
using namespace std;

inline void slove(int a, int b){
	cout << a*b << ' ' << (a+b)*2;
}

int main (){
	int a, b;
	cin >> a >> b;
	slove(a,b);
}
