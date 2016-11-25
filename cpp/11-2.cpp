#include<iostream>
#include<cstring>
using namespace std;

class Person
{ 
protected:
    char Name[10];
    char Sex;
    int Age;
public:
    Person(char *name, int age, char sex)
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

class Teacher: public Person
{
    char Dept[20];
    int Salary;
public:
    Teacher(char *name, int age, char sex, char *dept, int salary)
	:Person(name, age ,sex)	
    {
        strcpy(Dept, dept);
	Salary = salary;
    }
    void ShowMe()
    {
    	cout << "姓名 " << Name << endl;
    	cout << "性别 " << (Sex == 'm'? "男":"女") << endl << "年龄 " << Age << endl;
    	cout <<"工作单位　"<< Dept <<endl << "月薪 " << Salary;
    }
};

class Student: public Person	//What's the public mean?
{
    char ID[12];
    char Class[12];
public:
    Student(char *name, int age, char sex, char *id, char *classid)
	:Person(name, age ,sex)		//what will happend if i change the name
    {
        strcpy(ID, id);
	strcpy(Class, classid);
    }
    void ShowMe()
    {
    	cout << "学号 " << ID << endl << "姓名 " << Name << endl;
    	cout << "性别 " << (Sex == 'm'? "男":"女") << endl << "年龄 " << Age << endl;
    	cout << "班级 " << Class;
    }
};

int main(){
    char Name[20];
    char Sex;
    int Age;
    char ClassName[20];
    int Number;

    char Name2[20];
    char Sex2;
    int Age2;
    char ClassName2[20]; 
    char Num[12];
    cin >> Name >> Age >> Sex >> ClassName >> Number;
    Teacher tea(Name, Age, Sex, ClassName, Number);
    cin >> Name2 >> Age2 >> Sex2 >> Num >> ClassName2;
    Student stu(Name2, Age2, Sex2, Num, ClassName2);
    tea.ShowMe();
    cout << endl;
    stu.ShowMe();
}
