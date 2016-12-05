#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char arr[201];
    cin.getline(arr, 200);
    int n = strlen(arr)/2;
	for (int i = 0; i < n / 2; i++)
	{
		swap(arr[i], arr[n-1-i]);
	}
	cout << arr << endl;
	int count = 1;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == arr[i+1])
		{
			count ++;
		}else{
			if (count != 1)
				cout << char('0' + count) << arr[i];
			else
				cout << arr[i];
			count = 1;
		}	
	}
	return 0;
}
