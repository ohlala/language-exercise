#include<iostream>
using namespace std; 
 
class Shape{
protected:
    static double sum;            //��̬���ݳ�Ա  
public:
    virtual void printName() = 0;
    virtual void printArea() = 0;
    virtual void total() = 0;
    static double getSum(){
        return sum;    
    }
    //double Shape::sum = 0;        //�����ﲻ���Գ�ʼ��
};
 
double Shape::sum = 0;           //��̬���ݳ�Ա�������ʵ���ļ�(.h)�п��Գ�ʼ�� 
 
class Circle: public Shape{
    double radius;
    double area;
public:
    Circle(double a){
        radius = a;
    }
    void printName(){
        cout << "Բ:�뾶=" << radius <<",���:"; 
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
        cout << "������:�߳�=" << length <<",���:"; 
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
        cout << "������:��=" << length << ",��=" 
            << width << ",���:"; 
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
        cout << "����:�ϵ�=" << upper << ",�µ�=" 
            << lower << ",��=" << height << ",���:"; 
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
        cout << "������:�ױ�=" << lower 
            << ",��=" << height << ",���:"; 
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
//  cout << Shape::sum ;     //���ܷ��ʱ������Ե����ݳ�Ա
    cout << "�����:" << Shape::getSum();
}
