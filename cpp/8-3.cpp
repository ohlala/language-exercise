//�û�����һ���ַ�������β�ж���Ŀո񣬱�д������ȥ����Щ����Ŀո�Ҫ�����ʹ��ָ������ɱ��⡣
#include<iostream>

using namespace std;

char *deleteSpace(char*p){
	cout << &p << endl; 
	while(*p == ' ')
		p++;
    char *q = p;         //p q Ҫ���� 
	while(*q != '#')
		q++;
	q--;
	while(*q == ' ')
	    q--;
	q++; 
	*q = '#';				// �����ݲ����ǵü�*���� 
	q++; 
	*q = '\0';	
	return p; 
}
int main(){
	char *p;
	p = new char[100];
	cin.getline(p,100);
	cout << &p << endl;
	//deleteSpace(p);
	p = deleteSpace(p);
	cout << p; 
	return 0;
}

