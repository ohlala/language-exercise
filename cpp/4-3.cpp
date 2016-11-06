//连续录入5首歌的歌名、歌手和点击率清单并按照点击率由高到低的顺序显示歌曲清单的信息
//。如果点击率相同，则按照录入的顺序显示。
//歌曲清单格式如下：
//曲名  演唱者  点击率
#include<iostream>
using namespace std;
#define N 5
int main(){
	struct {
	    char name[51];
	    char singer[21];
	    int point;
	} list[N], temp;
	
	for (int i = 0; i < N; i++)
		cin >> list[i].name >> list[i].singer >> list[i].point; 
		
	for (int i = N; i >= 0; i--)
	    for (int j = 0; j < i-1; j++){
	    	if (list[j].point < list[j+1].point){
	    		temp = list[j];
	    		list[j] = list[j+1];
	    		list[j+1] = temp;
	    	}
	    }
		
	for (int i = 0; i < N; i++)
		cout << list[i].name << " " << list[i].singer 
		    << " " << list[i].point << endl; 
	return 0;
} 
