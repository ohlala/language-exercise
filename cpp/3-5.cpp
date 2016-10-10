#include<iostream> 
using namespace std;

int main(){
	int n, x, y, z, a, count = 0;
	cin >> n;
	if(n > 99 || n < 0){
	    cout << "the money is invaild!" << endl;the money is invalid!
	    return 0;
	}              
	for (x = 0; x <= n / 25; x++)
        for (y = 0; y <= n / 10; y++)
            for (z = 0; z <= n / 5; z++)
                for (a = 0; a <= n; a++ )
                    if(x * 25 + y * 10 + z * 5 + a == n){
                	    count++;
				}                
    cout << count << endl;
	return 0;
} 
