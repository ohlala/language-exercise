#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	switch (n){
		case 1:printf("monday\n");  break;
        case 2:printf("tuesday\n");   break;
        case 3:printf("wednesday\n");  break;
        case 4:printf("thursday\n");  break;
        case 5:printf("friday\n");  break;
        case 6:printf("saturday\n");  break;
        case 7:printf("sunday\n");  break;
        default:printf("invalid\n");  			//switch(x){  default: ;  } 
	}	
	return 0;
} 
