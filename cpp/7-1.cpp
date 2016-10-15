#include<iostream>
using namespace std;
void reset(int *a, int *b){
	*a = (*a + *b) / 2.0 + 0.5;
	*b = *a; 
}
int main(){
	int a, b;
	cin >> a >> b;
	reset (&a, &b);
	cout << a << ' ' << b; 
	return 0;
}
