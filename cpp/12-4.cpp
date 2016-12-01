#include<iostream>
using namespace std;

class Matrix{
	int m;
	int n;
	int* arr;
public:
	Matrix(){
		arr = NULL;			//指针需要进行初始化 
	}
	Matrix(int a, int b, int* c): m(a), n(b), arr(c)	//可以用这种方式为数据域赋值 
	{}
	Matrix operator+(Matrix& second){
		Matrix third;
		third.m = m;
		third.n = n;
		third.arr = new int[n*m];
		
		for (int i = 0; i < m; i++)				 
			for (int j = 0; j < n; j++)
				*(third.arr + i * n + j) = 			//每行有N个数据不是M个 
				*(arr + i * n + j) + *(second.arr + i * n + j);
		return third;
	}
	friend ostream &operator<<(ostream &out, const Matrix &mat);	//声明友元函数并在类外实现 
};

ostream &operator<<(ostream &out, const Matrix &mat){
	int m = mat.m;
	int n = mat.n;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n-1; j++)
			out << 	*(mat.arr + i * n + j) << ' ';
		cout << *(mat.arr + i * n + n -1) << endl;
	}
}
int main(){
	int m, n;
	cin >> m >> n;
	int *p, *q;
	p = new int[n*m];
	q = new int[n*m];
	for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> *(p + i * n + j);
	for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> *(q + i * n + j);
	Matrix A(m, n, p);
	Matrix B(m, n, q);
	cout << A + B;
}
