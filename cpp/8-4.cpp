#include<iostream>
using namespace std;

int main() {
	int **a; //指向指针的指针 
	int m, n, sum = 0;
	cin >> m >> n;
	
    a = new int *[n];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];	
	for (int i = 0; i < m; i++)
	    for (int j = 0; j < n; j++)
            //cin>>a[i][j];//输入 
            cin>> *(*(a+i)+j);//同上a相当于行指针 
	for (int i = 0; i < m; i++)
	    for (int j = 0; j < n; j++)
	        sum +=  *(*(a + i) + j);
	cout << sum;	
    //释放申请的空间！！！
    for(int i = 0; i < n; i++) //释放n个大小为m的一维数组
        delete []a[i]; 
    delete []a;//释放int指针数组
	return 0;
}
