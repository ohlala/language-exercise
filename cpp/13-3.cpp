#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
	char s[100];
    fstream io;
    io.open("a1.txt", ios::out);
	cin.getline(s, 100);
    io << s;
    io.close();

    io.clear();			//清除各种状态位 
    io.open("a1.txt", ios::in);
    io.getline(s, 100);
    io.close();
	for (int i = 0; s[i] != '\0'; i++)
	{
	    if (s[i] <= 'z' && s[i] >= 'a')		// && 和 ||分不清要死人啊！ 
	        s[i] -= 32;
	    cout << s[i];
	}
}
