//�û�������������Ȼ�����������о���Ԫ�أ������������þ���ת�����������Ӧ��[1,5]֮���������
//���ڸ�����ʱ����ʾ��matrix order error����
#include<iostream>
using namespace std;

int main(){
	int n, temp;
	cin >> n;
	if (n > 5 || n < 1){
		cout << "matrix order error";
		return 0;		
	}
	int arr[n][n];
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++){
	    	cin >> arr[i][j];
	    }
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < i; j++){
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	for (int i = 0; i < n; i++){
	    for (int j = 0; j < n - 1; j++)
	    	cout << arr[i][j] << " ";
	    cout << arr[i][n-1] << endl;
	}	
	return 0;
} 
