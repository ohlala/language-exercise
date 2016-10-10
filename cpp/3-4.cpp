#include<iostream> 
using namespace std;

int main(){
	int n, x, y, z, flag = 1;
	cin >> n;
	for (x = 0; x < n / 4; x++)
        for (y = 0; y < n / 3; y++)
            for (z = 0; z < n * 2; z += 2)
                if( x + y + z == n && x * 4 + y * 3 + z / 2 == n){
                	flag = 0;
                	cout << "men" << x <<endl; 
				    cout << "women" << y <<endl;
				    cout << "children" << z <<endl;
				}
    if (flag == 1){
    	cout << "no result!" << endl;
	}   
	return 0;
} 
