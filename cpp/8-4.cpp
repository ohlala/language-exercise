#include<iostream>
using namespace std;

int main() {
	int **a; //ָ��ָ���ָ�� 
	int m, n, sum = 0;
	cin >> m >> n;
	
    a = new int *[n];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];	
	for (int i = 0; i < m; i++)
	    for (int j = 0; j < n; j++)
            //cin>>a[i][j];//���� 
            cin>> *(*(a+i)+j);//ͬ��a�൱����ָ�� 
	for (int i = 0; i < m; i++)
	    for (int j = 0; j < n; j++)
	        sum +=  *(*(a + i) + j);
	cout << sum;	
    //�ͷ�����Ŀռ䣡����
    for(int i = 0; i < n; i++) //�ͷ�n����СΪm��һά����
        delete []a[i]; 
    delete []a;//�ͷ�intָ������
	return 0;
}
