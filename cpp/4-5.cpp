//����ʽ��������������ĸ�а���ָ�����������һЩ��ĸ���γ����ġ�
//���������china���ڼ��Ϊ1��λ�ò���������ĸ�����е���ĸa,
//b,c,d,e���ͱ������cahbicndae�����Ϊ2ʱ������Ϊchainbac��
//Ҫ���������ĺͼ�����Ӵ��������ĸ�����У�������a,b,c,d,e
//��������ȡ����Ӧ��ĸ���뵽�����У����������ĸ���е���ĸȡ��
//�����ͷ��ȡ��Ҫ�����������һ����ĸһ����������ĸ�����е���ĸ��
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	char ming[31], mi[60] = "0", arr[] = "abcde";
	cin >> ming >> n;
	int i, j, k;
	i = j = k = 0;
	while (1){
		for (int x = 0; x < n && ming[i] != '\0'; x++){
			mi[j] = ming[i];
			i++; j++;			
		}
		mi[j] = arr[k];
		j++; k++; k %= 5;	
		if ( ming[i] == '\0')
			break;
	}
	cout << mi;	
	return 0;
} 
