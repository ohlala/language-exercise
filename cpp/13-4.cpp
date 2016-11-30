#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	double arr[n];
	fstream aaa;
	aaa.open("out1.txt", ios::out);   //out向文件输出，cout向控制台输出 
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		aaa << arr[i] << ' ';
	}
	aaa.close();
	
	aaa.open("out1.txt", ios::in);
	for(int i = 0; i < n; i++)
	{
		aaa >> arr[i];
		sum += arr[i];
	}
	cout << "Avg=" << sum/(n*1.0);
	return 0;
}
