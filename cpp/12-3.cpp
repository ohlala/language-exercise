#include<iostream>
#include<cstring>
using namespace std;
class complex{
	int a, b;
public: 
	complex (int a = 0, int b = 0){	//带默认参数的构造函数是否可以代替无实参的构造函数?  看着行 
		this->a = a;
		this->b = b;
	}
	
	complex operator+(complex &com){
//	complex complex::operator+(complx &com){};   //实现于声明分离时这么写，operator+相当于函数名 

		complex temp;	//使用无实参的构造函数创建命名对象不可以带括号，匿名则要带 
		temp.a = a + com.a;
		temp.b = b + com.b;
		return temp;

//		int x, y; 			//该函数上下两种实现方式都是正确的 
//		x = a + com.a;
//		y = b + com.b;
//		return complex(x, y);
	}
	
//	complex operator=(complex &com){
//		a = com.a;
//		b = com.b;
//	}
	friend ostream &operator<<(ostream &stream,const complex &com); 	//com要加const，原因见主函数输出 
};
//二元运算符用成员重载时,只需要一个参数,另一个参数由this指针传入。
//如果需要两个参数，那么可以在类外面定义，然后在类里声明为友元。
//重载并实现于complex类外，因为<<运算符是属于ostream和istream类的。是友元函数而非成员函数。
ostream &operator<<(ostream &stream, const complex &com){		//第一个ostream是返回值，第二个ostream是参数(cout)
		stream << com.a << "+j" << com.b << endl;		//因为声明了友元函数所以可以用.运算符访问数据域 
		return stream;
}

 int main()
{
    int a, b;
    cin >> a >> b;
    complex m(a, b);
    cin >> a >> b;
    complex n(a, b);
    cout << m << n;
    cout << m + n;		//m+n的结果是临时值，作为引用传给重载的<<的时候必须加在函数头const
}
