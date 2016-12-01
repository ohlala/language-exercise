#include<iostream>
#include<cstring>
using namespace std;

class Pet
{  
protected:	//Ϊʲô������˽�г�Ա   
//ͬ11-3,˽�еĳ�Ա���ܱ��̳�,�����еĳ�Ա�������Է��ʻ����е�˽�����ݣ�
//�����������еĳ�Ա���������ԣ���ֻ�ܷ����Լ����ӵ����ݳ�Ա�������ַ�ʽ��
//һ��ͨ������ĳ�Ա�������ʣ�11-3�������ǽ���������ݳ�Ա����Ϊ�������͡�

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
    virtual void GetInfo() = 0;		//���麯�� 
    virtual void Speak() = 0;
};

class Cat :public Pet
{
 public:
 	//Ҫ�й��캯���������޷����û���Ĺ��캯����Ӧ�ǹ�����Ա�������������޷����ʹ��캯����
    Cat(char* name, int age, char* color)	
	:Pet(name, age, color){} 
    void GetInfo()
    {
        cout << "è������:" << name << endl;	//����Ҫ���ʻ������ݳ�Ա���ʻ������ݳ�ԱΪ�������� 
        cout << "è������:" << age << endl;
        cout << "è����ɫ:" << color << endl;
    }
    void Speak()
    {
       cout << "è�Ľ���:" << "miao!miao!" << endl;
    }
};

class Dog :public Pet
{
public:
    Dog(char* name, int age, char* color)
	:Pet(name, age, color){}
    void GetInfo()
    {
        cout << "��������:" << name << endl;
        cout << "��������:" << age << endl;
        cout << "������ɫ:" << color << endl;
    }
    void Speak()
    {
       cout  << "���Ľ���:" << "wang!wang!" << endl;
   }
};

 int main()
{
    Pet *po;
    char na1[10], na2[10], co1[10], co2[10];	//��Ҫ���������С
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
