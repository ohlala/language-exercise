#include<iostream>
using namespace std;
void caesar(char s[]){
	for (int i = 0; s[i] != '\0'; i++)
		if(s[i] >= 97){
			s[i] -= 32;
			s[i] += 3;
			s[i] = (s[i] > 90)? s[i] - 26 : s[i];
		}
		else{
			s[i] += 32;
			s[i] += 3;
			s[i] = (s[i] > 122)? s[i] - 26 : s[i];
		}
}
void oddeven(char s[]){
	char a[100],b[100];
	int  i, j = 0, k = 0;
	for (int i = 0; s[i]; i++){
		if (i % 2 == 0){
			a[j] = s[i];
			j++;
		}else{
			b[k] = s[i];
			k++;
		}
	}
	a[j] = '\0';
	b[k] = '\0';
	for (int i = 0; a[i]; i++){
		s[i] = a[i];
	}
	for (int i = 0; b[i]; i++){
		s[j + i] = b[i];
	}
	s[j+k] = '\0';
}
void cipher(void (*f)(char s[]),char s[]){
	(*f)(s);
}

int main(){
	int  n;
	char arr[100];
	cin.getline(arr,100);
	cin >> n;
	void (*f)(char s[]);
	if (n == 1)
	    f = caesar;
	else
	    f = oddeven;
	cipher(f, arr);
	cout << arr;
	return 0;
}
