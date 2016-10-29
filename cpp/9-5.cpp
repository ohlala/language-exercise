#include<iostream>
using namespace std;
class Weekday{
	public:
		int n;
		void SetDay(){
			cin >> n;
		}
		void IncDay(){
			n = (n + 1) % 7;
		}
		void NowDay(){
			switch (n){
				case 1:  cout << "星期一";
						 break; 
				case 2:  cout << "星期二";
						 break;
				case 3:  cout << "星期三";
						 break;
		    	case 4:  cout << "星期四";
						 break;
				case 5:  cout << "星期五";
						 break;
				case 6:  cout << "星期六";
						 break; 
				case 0:  cout << "星期日";
						 break;			
			}
		}
};
int main (){
	Weekday aaa; 
    aaa.SetDay();
    aaa.NowDay();
    cout << endl;
    aaa.IncDay();
    aaa.NowDay();
    cout << endl;
	aaa.IncDay();
    aaa.NowDay();
} 
