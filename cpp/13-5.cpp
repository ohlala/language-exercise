#include<iostream>
#include<fstream>

using namespace std;

void sort1(char a[], int n)
{
	char temp;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
 
int main()
{
    int n;
    cin >> n;
	char arr[n];
	fstream io;
	io.open("A.txt", ios::out);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		io << arr[i] << ' ';
	}
	io.close();
	
	io.open("A.txt", ios::in);
	for (int i = 0; i < n; i++)
		io >> arr[i];
	sort1(arr, n);
	io.close();
	
	io.open("B.txt", ios::out);
	for (int i = 0; i < n - 1; i++)
	{
		io << arr[i] << ' ';
		cout << arr[i] << ' ';
	}
	io << arr[n-1] << ' ';
	cout << arr[n-1] << ' ';
	io.close();
}
