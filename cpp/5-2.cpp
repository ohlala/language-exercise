//��дһ���������������СԪ�صĺ��������麯����ԭ��Ϊ
//int imax(int array[], int count); // ��������������Ԫ��
//int imin(int array[], int count); // �������������СԪ��
//���в���countΪ�����е�Ԫ�ظ����������ķ���ֵ��Ϊ��õ����
//����СԪ��ֵ֮��Ҫ��ͬʱ��д��������������֤��
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


