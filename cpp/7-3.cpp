#include<iostream>
using namespace std;
void clear(int n, int *arr){
	for (int i = 0; i < n; i++){
		*(arr + i) = 0;
	}
}
int main(){
	int arr[100], n, a = 0;
	cin >> arr[a];
	while (arr[a] != -1){
		a++;
		cin >> arr[a];
	}
	cin >> n;
	clear(n ,arr);
    for (int i = 0; i < a - 1; i++)
    	cout << arr[i] << ' ';
	cout << arr[a-1];
	return 0;
}
