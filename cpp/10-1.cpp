#include<iostream>
using namespace std;
class Date
{
private:
    int year;                 //�������������г�ʼ�� 
    int month;
    int day;
public:
    Date(int a, int b, int c)	//�����ڹ��캯���г�ʼ�� 
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
	void init(int a, int b, int c)    //�����ں����г�ʼ�� 
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
