//插入式加密是在明文字母中按照指定间隔插入另一些字母以形成密文。
//例如对明文china，在间隔为1的位置插入其它字母序列中的字母a,
//b,c,d,e，就变成密文cahbicndae；间隔为2时的密文为chainbac，
//要求输入明文和间隔，从存放其它字母的序列（仅包含a,b,c,d,e
//）中依次取出对应字母插入到明文中，如果其它字母序列的字母取完
//，则从头再取，要求密文中最后一个字母一定是其它字母序列中的字母。
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	char ming[31], mi[60] = "0", arr[] = "abcde";
	cin >> ming >> n;
	int i, j, k;
	i = j = k = 0;
	while (1){
		for (int x = 0; x < n && ming[i] != '\0'; x++){
			mi[j] = ming[i];
			i++; j++;			
		}
		mi[j] = arr[k];
		j++; k++; k %= 5;	
		if ( ming[i] == '\0')
			break;
	}
	cout << mi;	
	return 0;
} 
