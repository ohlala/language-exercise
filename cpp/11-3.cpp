#include<iostream>
#include<cstring>
using namespace std;

class Person
{ 
protected:
    char Name[10];
    int Age; 
public:
    Person(char* name, int age)
    {
        strcpy(Name, name);
	Age = age;
	cout<<"constructor of person "<<Name<<endl; 
    }
    ~Person()
    { 
	cout<<"deconstructor of person "<<Name<<endl; 
    }
};

class Student: public Person	
{
    char ClassName[12];
    Person Monitor;
public:
    Student(char *name, int age, char *classname, char *name1, int age1)
	 :Person(name, age),Monitor(name1,age1)// 使用这种形式来为monitor初始化!!!!!!!!
    {
	//Monitor(name1, age1);
        strcpy(ClassName, classname);
	cout<<"constructor of Student" << endl; 
    }
    ~Student()
    {
	cout<<"deconstructor of Student" << endl; 
    }
};

int main(){
    char Name[20];
    int Age;
    char ClassName[22];
    char Name2[20];
    int Age2;
    cin >> Name >> Age >> ClassName >> Name2 >> Age2;
    Student stu(Name, Age, ClassName, Name2, Age2);
}
