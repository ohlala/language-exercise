#include<iostream>
using namespace std;

int main(){
	int x, y, z, sum, ave;
	double ave2;	
	cin >> x >> y >> z;
	sum = x + y + z;
	ave2 = sum / 3.0;
	ave = static_cast<int>(ave2 + 0.5);
	//ave = int (ave2 + 0.5);	ʹ��c++��������c���
	//static_cast<int>(x * 100)/100.0;������λС�� 
	cout << sum << endl << ave2 << endl << ave;
	return 0;
}
