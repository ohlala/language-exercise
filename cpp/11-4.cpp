#include<iostream>
#include<cstring>
using namespace std;

class Point
{
	int x, y; //点的x和y坐标
public: 
	//Point( int = 0, int = 0 ); // 构造函数
	//void SetPoint( int, int ); // 设置坐标
	//void Print(); //输出点的坐标 };　　//这里把“｝”注释了！
	int GetX() { return x; } // 取x坐标
	int GetY() { return y; } // 取y坐标

	
	Point( int a, int b ) { SetPoint( a, b ); }
	void SetPoint( int a, int b ) { x = a; y = b; }
	void Print() { cout << "[" << x << "," << y << "]";} 
};
class Circle :public Point
{
	double radius;
public:
	//对数据成员赋值，并使用SetRadius和基类的Point
	//Circle(int x = 0, int y = 0 , double r = 0.0); 
	//void SetRadius( double ); //设置半径
	//double GetRadius(); //取半径
	//double Area(); //计算面积
	//void Print(); //输出圆心坐标和半径，并使用基类的Print 
	

	//声明和实现不能放在同一个文件里
	Circle(int x = 0, int y = 0 , double r = 0.0) :Point(x, y) 	//　只能在函数实现里这样写，声明不可以！
	//Point (x, y) 而不是 Point (int x, int y)！！
	//Point (x, y)相当于把刚接收的构造函数Circle的x,y传给Point的构造函数
	{
		radius = r;
	}
	void SetRadius( double r )
	{	
		radius = r;
	}
	double GetRadius()
	{
		return radius;
	}; 
	double Area()
	{	
		return radius * radius * 3.14;
	}
	void Print()
	{
		Point :: Print();
	}
};

int main ()
{
	int x1, y1, x2, y2, r;
	cin >> x1 >> y1 >>  x2 >> y2 >> r;
	Point p(x1, y1);
	Circle c(x2, y2, r);
	cout << "Point p ";
	p.Print();
	cout << endl << "Circle c Center=";
	c.Print();
 	cout <<  endl << "Radius=" << c.GetRadius();
 	cout <<  endl << "The centre of circle c ";
	c.Print();
	cout <<  endl << "The area of circle c " << c.Area(); 
}
