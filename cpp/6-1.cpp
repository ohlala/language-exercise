#include <iostream>
#include <cmath>
using namespace std;

int imax (int arr[],int n){
    static int max;		//max是库函数尽量不要使用 
    if (n == 1){
        max = arr[0];
        return max; 
    }else {
        if (imax(arr,n-1) < arr[n-1])
            return arr[n-1];
        else 
		    return imax(arr,n-1);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << imax(arr, n);
    return 0;
}
