#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x, y, z, sum, ave;
	double ave2;	
	cin >> x >> y >> z;
	sum = x + y + z;
	ave2 = sum / 3.0;
	ave = int (ave2 + 0.5);	
	cout << sum << endl << ave2 << endl << ave;
	return 0;
}
