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
				case 1:  cout << "����һ";
						 break; 
				case 2:  cout << "���ڶ�";
						 break;
				case 3:  cout << "������";
						 break;
		    	case 4:  cout << "������";
						 break;
				case 5:  cout << "������";
						 break;
				case 6:  cout << "������";
						 break; 
				case 0:  cout << "������";
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
