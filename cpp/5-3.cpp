//��д����int isprime(int a);�����ж�����a�Ƿ�Ϊ������������������������1�����򷵻�0��
//���øú����ҳ����������n�������е������� ע�⣬1����������
#include<iostream>
#include<cmath>
using namespace std;
int isprime(int a){
	if (a == 1)			//���Ǳ߽���� 
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

