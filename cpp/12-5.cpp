#include<iostream>
using namespace std; 
 
class Shape{
protected:
    static double sum;            //静态数据成员  
public:
    virtual void printName() = 0;
    virtual void printArea() = 0;
    virtual void total() = 0;
    static double getSum(){
        return sum;    
    }
    //double Shape::sum = 0;        //在这里不可以初始化
};
 
double Shape::sum = 0;           //静态数据成员在类外或实现文件(.h)中可以初始化 
 
class Circle: public Shape{
    double radius;
    double area;
public:
    Circle(double a){
        radius = a;
    }
    void printName(){
        cout << "圆:半径=" << radius <<",面积:"; 
    }
    void printArea(){
        area = 3.14159 * radius * radius;
        cout << area << endl;
    }
    void total(){
        Shape::sum += area;
    }
};
 
class Square: public Shape{
    double length;
    double area;
public:
    Square(double a){
        length = a;
    }
    void printName(){
        cout << "正方形:边长=" << length <<",面积:"; 
    }
    void printArea(){
        area = length * length;
        cout << (length * length) << endl;
    }
    void total(){
        Shape::sum += area;
    }
};
 
class Rectangle: public Shape{
    double length;
    double width;
    double area;
public:
    Rectangle(double a, double b){
        length = a;
        width = b;
    }
    void printName(){
        area = length * width;
        cout << "长方形:长=" << length << ",宽=" 
            << width << ",面积:"; 
    }
    void printArea(){
        cout << (length * width) << endl;
    }
    void total(){
        Shape::sum += area;
    }
};
 
class Trapezoid: public Shape{
    double upper;
    double lower;
    double height;
    double area;
public:
    Trapezoid(double a, double b, double c){
        upper = a;
        lower = b;
        height = c;
    }
    void printName(){
        cout << "梯形:上底=" << upper << ",下底=" 
            << lower << ",高=" << height << ",面积:"; 
    }
    void printArea(){
        area = (upper + lower) * height * 0.5;
        cout << (upper + lower) * height * 0.5 << endl;
    }
    void total(){
        Shape::sum += area;
    }
}; 
 
class Triangle: public Shape{
    double lower;
    double height;
    double area;
public:
    Triangle(double b, double c){
        lower = b;
        height = c;
    }
    void printName(){
        cout << "三角形:底边=" << lower 
            << ",高=" << height << ",面积:"; 
    }
    void printArea(){
        area = lower * height * 0.5;
        cout << lower * height * 0.5 << endl;
    }
    void total(){
        Shape::sum += area;
    }
}; 
 
int main(){
    double a, b, c;
    Shape * p[5];
    cin >> a;
    p[0] = new Circle(a);
    cin >> a;
    p[1] = new Square(a);
    cin >> a >> b;
    p[2] = new Rectangle(a, b);
    cin >> a >> b >> c;
    p[3] = new Trapezoid(a, b, c);
    cin >> a >> b;
    p[4] = new Triangle(a, b);
 
    for (int i = 0; i < 5; i++){
        p[i]->printName();
        p[i]->printArea();
        p[i]->total();
    } 
//  cout << Shape::sum ;     //不能访问保护属性的数据成员
    cout << "总面积:" << Shape::getSum();
}
