//��дһ������������ʾ���ֵ���ֵ��1-12��ת���ɶ�Ӧ��Ӣ�����ƣ�Сд����
//�û����밢�������֣����������Ӧ���ֵ�Ӣ�ĵ��ʡ�Ҫ�����ʹ��ָ��������ɡ�
#include<iostream>
using namespace std;
char *change(int n){
	char *number[]={     //����һ������ int a[] = {1, 2, 3, 4}; �����飬ע���ʽ 
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine",
		"ten",
		"eleven",
		"twelve"
	};
	return number[n];
}

int main() {
    int n;
    char* p;
	cin >> n;
	cout << change(n-1);  // ע��[]�ͣ��������� 
	return 0; 
} 
