#include<iostream>
using namespace std;
void add_array(int a, int *sum){
	*sum += a; 
}
int main(){
	int a, sum = 0;
	cin >> a;
	while (a != -1){
		add_array(a, &sum);
		cin >> a;
	} 
	cout << sum; 
	return 0;
}
