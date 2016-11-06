#include<iostream>
using namespace std;

int main(){
	int x, y, z, sum, ave;
	double ave2;	
	cin >> x >> y >> z;
	sum = x + y + z;
	ave2 = sum / 3.0;
	ave = static_cast<int>(ave2 + 0.5);
	//ave = int (ave2 + 0.5);	使用c++风格而不是c风格
	//static_cast<int>(x * 100)/100.0;保留两位小数 
	cout << sum << endl << ave2 << endl << ave;
	return 0;
}
