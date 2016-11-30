#include<iostream>
#include<iomanip>	//使用setprecision 需要添加该头文件
#include<cmath>
using namespace std;

int main()
{
    int a;
    double b;
    cin >> a;
    b = sqrt(a*1.0);
    cout << fixed << setprecision(1) << b << endl;
	//setpercision控制精度是总的，用于fixed之后控制小数点后位数
    cout << setprecision(2) << b << endl;
    cout << setprecision(3) << b << endl;
    cout << setprecision(4) << b << endl;
    cout << setprecision(5) << b << endl;
    cout << setprecision(6) << b << endl;
}
