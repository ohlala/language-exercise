#include<iostream> 
using namespace std;

int main(){
	
	double score[10], max, min, sum = 0;
	for (int i = 0; i < 10; i++){
		cin >> score[i];	
	}
	max = min = score[0];
	for (int i = 0; i < 10; i++){
		sum += score[i];
		if (score[i] > max)
		    max = score[i];
		if (score[i] < min)
		    min = score[i];
		if (score[i] > 100 || score[i] < 0){
			cout << "the score is invalid.";
			return 0;
		}		
	}
	cout << (sum -min - max) / 8; 
	return 0;
} 
