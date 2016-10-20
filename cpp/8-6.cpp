#include<iostream>
using namespace std;

int sum_array(int n){
	int **a, sum = 0;
	a = new int*[n];
	for (int i = 0; i < n; i++)
	    a[i] = new int[n]; 
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++){
	    	cin >> a[i][j];
	    	if (i == j){
	    		sum += a[i][j];
	    	}
	    }
	return sum;
} 
int main() {
    int n;
    cin >> n;
    n = sum_array(n); 
    cout << n;
    return 0; 
} 
