//编写程序，把从1到n的n个整数赋予某个int型数组，然后用int型指针输出该数组元素的值。,
#include<iostream>

using namespace std;
int main() {
    int *p, n;
	cin >> n;
	p = new int[n];    //  动态分配内存的数组 
    for (int i = 0; i < n; i++){
    	p[i] = i + 1;
    }
	for (int i = 0; i < n - 1; i++){
    	cout << *(p + i) << ' ';
    }
	cout << *(p + n - 1);
   return 0; 
} 
