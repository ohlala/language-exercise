//�������ܷ����ܹ����ǣ���ԭ����Сд��ĸ����ĸ���������ĵ�3����ĸ��
//��д��ʽ���滻����д��ĸ��ͬ��������Сд��ĸ�滻��������ĸ�������
//��������ĸ���ɽ���ĸ����������δ�νӵġ�����ĸc����F���滻����ĸy��
//B���滻������ĸZ��c���档���ʵ�����¹��ܣ�����һ���ַ�����������ܺ������
//�������н�����£�
//AMDxyzXYZ
//dpgABCabc
#include<iostream>
using namespace std;

int main(){
	char arr[21];
	cin >> arr;
	for (int i = 0; arr[i] != '\0'; i++){
		if(arr[i] >= 97){
			arr[i] -= 32;
			arr[i] += 3;
			arr[i] = (arr[i] > 90)? arr[i] - 26 : arr[i];
		}
		else{
			arr[i] += 32;
			arr[i] += 3;
			arr[i] = (arr[i] > 122)? arr[i] - 26 : arr[i];
		}
		
	}
	cout << arr;
	
	return 0;
} 