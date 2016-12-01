#include<iostream>
#include<iomanip> 
#include<fstream>
using namespace std;

int main()
{
    const int n = 5;
    char s[100];
    fstream io, aa;
  
    io.open("A.txt", ios::out);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        io << s << endl;
    }
    io.close();

    io.open("A.txt", ios::in);
    aa.open("B.txt", ios::out); 
    for (int i = 0; i < n; i++)
    {
        io.getline(s, 100);
        aa << setw(4) << left << char(i + '1');
        aa << s << endl; 
    }
    io.close();
	aa.close();
	
	//尝试删除原文件，如果失败，提示错误并退出
	if(0 != unlink("A.txt"))
 	{
		cout<<"Remove file failed."<<endl;
		return -1;
 	}
 	//尝试重命名临时文件，如果失败，提示错误并退出
	if(0 != rename("B.txt", "A.txt"))
 	{
		cout<<"Rename file failed."<<endl;
		return -1;
	}
}
