//����¼��5�׸�ĸ��������ֺ͵�����嵥�����յ�����ɸߵ��͵�˳����ʾ�����嵥����Ϣ
//������������ͬ������¼���˳����ʾ��
//�����嵥��ʽ���£�
//����  �ݳ���  �����
#include<iostream>
using namespace std;
#define N 5
int main(){
	struct {
	    char name[51];
	    char singer[21];
	    int point;
	} list[N], temp;
	
	for (int i = 0; i < N; i++)
		cin >> list[i].name >> list[i].singer >> list[i].point; 
		
	for (int i = N; i >= 0; i--)
	    for (int j = 0; j < i-1; j++){
	    	if (list[j].point < list[j+1].point){
	    		temp = list[j];
	    		list[j] = list[j+1];
	    		list[j+1] = temp;
	    	}
	    }
		
	for (int i = 0; i < N; i++)
		cout << list[i].name << " " << list[i].singer 
		    << " " << list[i].point << endl; 
	return 0;
} 
