//编写一组求数组中最大最小元素的函数。该组函数的原型为
//int imax(int array[], int count); // 求整型数组的最大元素
//int imin(int array[], int count); // 求整型数组的最小元素
//其中参数count为数组中的元素个数，函数的返回值即为求得的最大
//或最小元素之值。要求同时编写出主函数进行验证。
#include<iostream>
#include<string>
using namespace std;
void mystrrev(char str[]);

int imax(int array[], int count){
	int max = array[0];
	for (int i = 0; i < count; i++)
		if (array[i] > max)
		    max = array[i];
	return max;
}
int imin(int array[], int count){
	int min = array[0];
	for (int i = 0; i < count; i++)
		if (array[i] < min)
		    min = array[i];
	return min;
}
int main(){
	int n, max, min;
	cin >> n;
	int arr[n];
    for (int i = 0; i < n; i ++)
    	cin >> arr[i];
    max = imax(arr, n);
    min = imin(arr, n);
	cout << max <<endl << min;
    return 0;
} 


