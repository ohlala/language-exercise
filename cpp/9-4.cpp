#include<iostream>
#include <iomanip>    //������ͷ�ļ��Կ��������ʽ 
using namespace std;

class MyTime{
	private:
		int hour, minute, second;         // ��������������ʱΪ�丳ֵ 
	public:
	void SetTime(){
		cin >> hour >> minute >> second;
	}	
	void print_12(){
		if (hour > 11){
			cout << setw(2) << setfill('0') << (hour - 12) 
			    << ':' << setw(2) << setfill('0') << minute   // ���������Ⱥ�����ʽ 
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
