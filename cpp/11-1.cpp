#include<iostream>
#include<cstring>
using namespace std;

class Person
{ 
    char Name[20];
    char Sex;
    int Age;
public:
    void Register(char *name, int age, char sex)
    {
        strcpy(Name, name); 	//use strcpy to assign string
        Age = age;
        Sex = sex; 
    }
    void ShowMe()
    {
        cout << Name << ' ' <<  Age << ' ' << Sex;
    }
};

class Student: public Person	//What's the public mean?
{
    int Number;
    char ClassName[10];
public:
    void RegisterStu(char *classname, int number, char *name, int age, char sex)
    {
        Register(name, age, sex);
	strcpy(ClassName, classname);
	Number = number;
    }
    void ShowStu()
    {
	cout << Number << ' ' << ClassName << ' ';
    	ShowMe();
    }
};

int main(){
    char Name[20];
    char Sex;
    int Age;
    int Number;
    char ClassName[10];
    cin >> ClassName >> Number >> Name >> Age >> Sex;
    Student stu;
    stu.RegisterStu(ClassName, Number, Name, Age, Sex);
    stu.ShowStu();
    cout << endl;    
    stu.ShowMe();
}
