#include<iostream>
#include<string>
#include<map>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
	string cla;
	double stu, point;
	map<string, vector<double> > map1;
	map<string, vector<double> > :: iterator p;
	cin >> cla >> stu >> point;
	while (cla != "000"){
		p = map1.find(cla);
		if (p != map1.end()){
			p -> second[0] += 1.0;  
			p -> second[1] += point; 
		}else{
			vector<double> aa(2);
			aa[0] = 1;
			aa[1] = point;			
			map1.insert(map<string, vector<double> >::value_type(cla, aa));
		}
		cin >> cla >> stu >> point;
	}
	for(p = map1.begin(); p != map1.end(); p++)
		cout << p->first << ' ' << fixed << setprecision(3) << 
			p->second[1]/p->second[0] << endl;	
	return 0;
}
