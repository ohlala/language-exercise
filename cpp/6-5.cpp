#include<iostream> 
#include<cstring>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void invert(char arr[], int i, int j){
	if (i < j){
		invert(arr, i+1, j-1);
		swap(arr[i], arr[j]);
	}
}
//�ݹ�ʱ��return��������ǰ���еĺ��������Բ��ݹ����֮��
//����������������䣬ʹ������β���Զ�ִֹͣ�з�����һ�� 
int main(){
	char arr[100];
	cin.getline(arr,100);
	int i = 0, j = strlen(arr)-1;
	invert (arr, i ,j);
	cout << arr;
	return 0; 
}
