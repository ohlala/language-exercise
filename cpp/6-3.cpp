#include <iostream>
#include <cstring>
using namespace std;

void print_spaced(char arr[]){
	for (int j = 0; j < strlen(arr)-1; j++)
        cout << arr[j] << " ";
    cout << arr[strlen(arr)-1] << endl;
}

int main (){
	char arr[100], brr[100];
	cin.getline(arr,100);
	cin.getline(brr,100);
    print_spaced(arr);
    print_spaced(brr);
	return 0;
}
