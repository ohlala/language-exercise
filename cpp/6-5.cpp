#include<iostream> 
#include<cstring>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void invert(char arr[], int i, int j){
	if (i < j){
		invert(arr, i+1, j-1);
		swap(arr[i], arr[j]);
	}
}
//递归时用return回跳出当前运行的函数，可以不递归调用之后
//还继续运行其他语句，使函数到尾部自动停止执行返回上一层 
int main(){
	char arr[100];
	cin.getline(arr,100);
	int i = 0, j = strlen(arr)-1;
	invert (arr, i ,j);
	cout << arr;
	return 0; 
}
