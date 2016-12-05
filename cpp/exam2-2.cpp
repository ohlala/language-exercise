#include<iostream>
#include<string>
#include<map>
#include<iomanip>

using namespace std;

int main()
{
	string cla, stu;
	double point;
	int count;
	map<string, double> map1;
	map<string, double> :: iterator p;
	map<string, int> map2;
	map<string, int> :: iterator q;
	
	
	cin >> cla >> stu >> point;
	while (cla != "000"){
		p = map1.find(cla);
		q = map2.find(cla);
		if (p != map1.end()){
			q -> second += 1;
			p -> second += point;  
		}else{
			map1.insert(map<string, double>::value_type(cla, point));
			map2.insert(map<string, int>::value_type(cla, 1));
			
		}
		cin >> cla >> stu >> point;
	}
	for(p = map1.begin(), q = map2.begin() ; p != map1.end(); p++, q++)
		cout << p->first << ' ' << fixed << setprecision(3) << p->second/q->second << endl;
	
	return 0;
}
