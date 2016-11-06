#include<iostream>
#include<cmath>
using namespace std;
int a, b, c, m;
int func1(int x){
	return ((a * x) + b) * x + c;
}
int func2(int x){
	return pow(x, m);
}
int avg(int (*f)(int), int x1, int x2){ // ��һ�������ǽ���int���ҷ���int�ĺ�����ָ�� 
	int sum = 0;
	for (int i = x1; i <= x2; i++){
		sum += (*f)(i);			//�ȼ���func1(i)���� func2(i) 
	}
	return sum / (x2 - x1 + 1); 
} 

int main(){
	int x1, x2;
	cin >> a >> b >> c >> m >> x1 >> x2;
	cout << avg(func1, x1, x2) << endl << avg(func2, x1, x2); 
	return 0;
}
