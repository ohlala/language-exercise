#include <iostream>
#include <cstring>
using namespace std;
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int sort(int &a,int &b){
	if (a < b)
		swap(a,b);
}

int sort(int &a, int &b, int &c){
	sort(a,b);sort(a,c);
	sort(b,c);
}

int sort(int &a, int &b, int &c, int &d){
	sort(a,b);sort(a,c);sort(a,d);
	sort(b,c);sort(b,d);
	sort(c,d);	
}

int sort(int arr[],int n){
	for (int i = n; i > 0 ; i--){
		for (int j = 0; j < i-1; j++){
			if (arr[j] < arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
}

int print (int arr[],int n){
	for (int i = 0; i < n - 1; i++)
		cout << arr[i] << " ";
	cout << arr[n-1];
}

int main()
{
int a,b,c,d;
int data[100];
int k,n,i;
  cin>>k;
  switch(k)
  {
    case 1:
        cin>>a>>b;
        sort(a,b);
        cout<<a<<" "<<b<<endl;
        break;
    case 2:
        cin>>a>>b>>c;
        sort(a,b,c);
        cout<<a<<" "<<b<<" "<<c<<endl;          
        break;      
    case 3:
        cin>>a>>b>>c>>d;
        sort(a,b,c,d);
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        break;  
    case 4:
        cin>>n;
        for(i=0;i<n;i++)
           {
            cin>>data[i];
        } 
        sort(data,n);
        print(data,n);
        break;      
  }
  return 0;
}
