#include<iostream>
#include<cstring>
using namespace std;

class Pet
{  
protected:	//为什么不能是私有成员   
//同11-3,私有的成员不能被继承,基类中的成员函数可以访问基类中的私有数据，但是派生类中的成员函数不可以，他只能访问自己增加的数据成员。有两种方式，一是通过基类的成员函数访问（11-3），二是将基类的数据成员定义为保护类型。

    char name[10];
    int age;
    char color[10];
public: 
    Pet(char* na, int ag, char* co)
    {
        strcpy(name, na);
        strcpy(color, co);
        age =ag;
    }
    virtual void GetInfo() = 0;
    virtual void Speak() = 0;
};

class Cat :public Pet
{
 public:
    Cat(char* name, int age, char* color)	//要有构造函数，否则无法调用基类的构造函数。要是公共成员，主函数无法访问构造函数。
	:Pet(name, age, color){} 
    void GetInfo()
    {
        cout << "猫的名字:" << name << endl;
        cout << "猫的年龄:" << age << endl;
        cout << "猫的颜色:" << color << endl;
    }
    void Speak()
    {
       cout << "猫的叫声:" << "miao!miao!" << endl;
    }
};

class Dog :public Pet
{
public:
    Dog(char* name, int age, char* color)
	:Pet(name, age, color){}
    void GetInfo()
    {
        cout << "狗的名字:" << name << endl;
        cout << "狗的年龄:" << age << endl;
        cout << "狗的颜色:" << color << endl;
    }
    void Speak()
    {
       cout  << "狗的叫声:" << "wang!wang!" << endl;
   }
};

 int main()
{
    Pet *po;
    char na1[10], na2[10], co1[10], co2[10];	//需要设置数组大小
    int ag1, ag2;
    cin >> na1 >> ag1 >> co1;
    cin >> na2 >> ag2 >> co2;
    Cat c(na1, ag1, co1);
    Dog d(na2, ag2, co2);
    po = &c;
    po->GetInfo();
    po->Speak();
    po = &d;
    po->GetInfo();
    po->Speak();
}
