#include<iostream>
using namespace std;

int main(){
	char name[50];
//    cin.getline(char array[], int size, delimitChar);
//    遇到指定分隔符或者已经读入size-1个字符时停止默认分隔符为（'\n'）。 
	cin.getline(name,50); 			
	cout<<"Hello "<<name<<".";
	return 0;
} 
