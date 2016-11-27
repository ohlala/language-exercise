#include<iostream>
#include<cstring>
using namespace std;

class Pet
{
public: 
    virtual void Speak() 	//注意语法格式
    {
        cout << "How does a pet speak?" << endl;
    }
};				//注意语法格式；

class Cat :public Pet		//注意语法格式
{
 public:
    void Speak()
    {
       cout << "miao!miao!" << endl;
    }
};

class Dog :public Pet
{
public:
    void Speak()
    {
       cout << "wang!wang!" << endl;
   }
};

 int main()
{
    Pet p, *po;
    Dog d;
    Cat c;
    po = &p;
    po->Speak();
    po = &c;
    po->Speak();
    po = &d;
    po->Speak();
}
