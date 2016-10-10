#include<iostream> 
using namespace std;

int main(){
	int n, total = 1;
	cin >> n;
	for (int i = 0; i < n - 1; i++ )
        total = (total + 1) * 2;
	cout << total;
	return 0;
} 
