#include<iostream>
#include <iomanip>    //添加这个头文件以控制输出格式 
using namespace std;

class MyTime{
private:
	int hour, minute, second;         // 不能在声明变量时为其赋值 
public:
	MyTime(){
		hour = 0;
		minute = 0;
		second = 0;	
	}
	MyTime(int a, int b, int c){
		hour = a;
		minute = b;
		second = c;	
	}
	void SetTime(){
		cin >> hour >> minute >> second;
	}
	void add(MyTime a)
	{
		second += a.second;
		if (second >= 60) {
			second -= 60;
			minute ++; 
		}
		minute += a.minute;
		if (minute >= 60) {
			minute -= 60;
			hour ++; 
		}
		hour += a.hour;
		if (hour >= 24) {
			hour -= 24; 
		}
	}
	void minus(MyTime a)
	{
		second -= a.second;
		if (second < 0) {
			second += 60;
			minute --; 
		}
		minute -= a.minute;
		if (minute < 0) {
			minute += 60;
			hour --; 
		}
		hour -= a.hour;
		if (hour < 0) {
			hour += 24; 
		}
	}
	void print_12(){
		if (hour > 11){
			cout << setw(2) << setfill('0') << (hour - 12) 
			    << ':' << setw(2) << setfill('0') << minute   // 设置输出宽度和填充格式 
				<< ':' << setw(2) << setfill('0') << second;
			cout << " PM";
		}else {
			cout << setw(2) << setfill('0') << hour 
			    << ':' << setw(2) << setfill('0') << minute 
				<< ':' << setw(2) << setfill('0') << second;
		    cout << " AM";
        }
    }
	void print_24(){
       	cout << setw(2) << setfill('0') <<  hour 
		    << ':' << setw(2) << setfill('0') << minute 
			<< ':' << setw(2) << setfill('0') << second;
	}
};
int main() {
	MyTime t1, t2(8, 10, 30), t3;
	t1.print_12();	  cout << endl; 
	t1.print_24();    cout << endl;
	t2.print_12();    cout << endl;
	t2.print_24();    cout << endl;
	t1.SetTime();
    t3.SetTime();
    t1.add(t3);
    t2.minus(t3);
    t1.print_12();	  cout << endl; 
	t1.print_24();    cout << endl;
	t2.print_12();    cout << endl;
	t2.print_24();    cout << endl;
	return 0;
}
