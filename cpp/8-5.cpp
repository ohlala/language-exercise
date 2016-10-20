#include<iostream>
using namespace std;

//该函数可以根据参数n动态申请n个元素的整型数组，最后将数组指针返回。
int *new_array(int n){
	int *aa;
	aa = new int[n];
	return aa;
} 
//将指定的n个元素的数组每个元素的值均初始化为c。
void init_array(int *p, int n,int c){
	for (int i = 0; i < n; i++)
		*(p+i) = c;
}
int main() {
    int n, a, *p;
    cin >> n >> a;
    p = new_array(n); 
    init_array(p, n, a);
    if (n > 1) {
    	for (int i = 0; i < n - 1; i++)
            cout << *(p + i) << ' ';
        cout << *(++p);
    }else
        cout << *p;
    return 0; 
} 

