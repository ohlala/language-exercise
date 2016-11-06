//将用户输入的阿拉伯数字转换成对应星期几的英文单词
//(monday,tuesday,wednesday,thursday,friday,saturday,sunday)。
//输入1显示"monday",输入7显示“sunday”，
//如果用户输入的数字不在1~7之间，显示信息：invalid
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
        default:printf("invalid\n");
	}	
	return 0;
} 
