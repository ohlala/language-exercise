//��д���򣬰Ѵ�1��n��n����������ĳ��int�����飬Ȼ����int��ָ�����������Ԫ�ص�ֵ��,
#include<iostream>

using namespace std;
int main() {
    int *p, n;
	cin >> n;
	p = new int[n];    //  ��̬�����ڴ������ 
    for (int i = 0; i < n; i++){
    	p[i] = i + 1;
    }
	for (int i = 0; i < n - 1; i++){
    	cout << *(p + i) << ' ';
    }
	cout << *(p + n - 1);
   return 0; 
} 
