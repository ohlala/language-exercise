#include<iostream>
using namespace std;

//�ú������Ը��ݲ���n��̬����n��Ԫ�ص��������飬�������ָ�뷵�ء�
int *new_array(int n){
	int *aa;
	aa = new int[n];
	return aa;
} 
//��ָ����n��Ԫ�ص�����ÿ��Ԫ�ص�ֵ����ʼ��Ϊc��
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

