#include<iostream>
#include <iomanip>    //添加这个头文件以控制输出格式 
using namespace std;

class MyTime{
	private:
		int hour, minute, second;         // 不能在声明变量时为其赋值 
	public:
	void SetTime(){
		cin >> hour >> minute >> second;
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
       	cout << endl << setw(2) << setfill('0') <<  hour 
		    << ':' << setw(2) << setfill('0') << minute 
			<< ':' << setw(2) << setfill('0') << second;
	}
};
int main() {
	MyTime aaa;
	aaa.SetTime();
	aaa.print_12();
	aaa.print_24();
	return 0;
}
