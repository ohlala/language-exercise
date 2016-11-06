//编写函数int isprime(int a);用来判断整数a是否为素数，若是素数，函数返回1，否则返回0。
//调用该函数找出任意给定的n个整数中的素数。 注意，1不是素数。
#include<iostream>
#include<cmath>
using namespace std;
int isprime(int a){
	if (a == 1)			//考虑边界情况 
	    return 0;
    int flag = 1;
	for (int i = 2; i <= sqrt(a); i++){
		if ( a % i == 0)
	        flag = 0;
	} 
	return flag;
}

int main(){
	int arr[100],prime[100], a, i = 0;
    do{
		cin >> a;
    	if (a == 0)
    	    break;
    	arr[i] = a;
    	i++;
    } while (1);  
    arr[i] = 0;
    
    int count = 0;
    for (i = 0; arr[i] != 0; i++){
        if (isprime(arr[i])){
        	prime[count] = arr[i];
			count ++;
        }     
	} 
	if (count > 1){
		for (i = 0; i < count - 1; i++){
		cout << prime[i] << " ";
		} 
		cout << prime[i];
	} else cout << prime[0];
	return 0;
} 

