//用户输入矩阵阶数，然后按行输入所有矩阵元素（整数），将该矩阵转置输出。阶数应是[1,5]之间的整数，
//不在该区间时，显示“matrix order error”。
#include<iostream>
using namespace std;

int main(){
	int n, temp;
	cin >> n;
	if (n > 5 || n < 1){
		cout << "matrix order error";
		return 0;		
	}
	int arr[n][n];
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++){
	    	cin >> arr[i][j];
	    }
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < i; j++){
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < n - 1; j++)
	    	cout << arr[i][j] << " ";
	    cout << arr[i][n-1] << endl;
	}	
	return 0;
} 
