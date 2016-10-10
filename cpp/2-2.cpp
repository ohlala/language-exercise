#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x, y;	
	cin >> x;
	y = sin(x*x)/(1-cos(x));
	cout << y << endl;
	return 0;
}
