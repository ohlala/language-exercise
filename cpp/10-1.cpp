#include<iostream>
using namespace std;
class Date
{
private:
    int year;                 //不可以在声明中初始化 
    int month;
    int day;
public:
    Date(int a, int b, int c)	//可以在构造函数中初始化 
	{ 
	    year = a;
	    month = b;
	    day = c;
	}
	Date()
    {
	    year = 1900;
	    month = 1;
	    day = 1;	
    }
	void init(int a, int b, int c)    //可以在函数中初始化 
	{
	    year = a;
	    month = b;
	    day = c;
	}
	void show()
	{
	    cout << year << '-' << month << '-' << day << endl;
    }
};

int main()
{
    Date d1, d2(2100, 12, 12);
    d1.show();
    d2.show();
    int a, b, c;
    cin >> a >> b >> c;
    d1.init(a, b, c);
    d1.show();
}
