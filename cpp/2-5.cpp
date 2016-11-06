#include<iostream>
using namespace std;

int main(){
	char ch;
	cin >> ch;
	ch = (ch <= 'z' && ch >= 'a') ? (ch + 'A' - 'a'): ch;
	cout << ch;
	return 0;
}
