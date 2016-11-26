#include<iostream>
#include<cstring>
using namespace std;

class Person
{ 
protected:
    char Name[10];
    char *Sex;
    int Age;
public:
    void Register(char *name, int age, char *sex)
    {
		strcpy(Name, name);
        Age = age;
        Sex = sex;
		//strcpy(Sex, sex); 	//这样写有问题啊！！！  不能字符串数组给字符指针 
    }
    void ShowMe()
    {
    	cout << "姓名 " << Name << endl;
    	cout << "性别 " << (*Sex == 'm'? "男":"女") << endl << "年龄 " << Age << endl;
    }
};

class Teacher: virtual public Person	//菱形多重派生必须使用virtual虚拟继承 
{
    char Dept[20];
    int Salary;
public:
    Teacher(char *name, int age, char *sex, char *dept, int salary)
    {
        Register(name, age ,sex);
		strcpy(Dept, dept);
		Salary = salary;
    }
    void Show()
    {
    	cout <<"工作单位 "<< Dept <<endl << "月薪 " << Salary;
    }
};

class Student: virtual public Person
{
    char ID[12];
    char Class[12];
public:
    Student(char *name, int age, char *sex, char *id, char *classid)
    {
        Register(name, age ,sex);
		strcpy(ID, id);
		strcpy(Class, classid);
    }
    void Show()
    {
    	cout << "班级 " << Class << endl;
		cout << "学号 " << ID << endl;
    }
};

class Graduate : public Teacher, Student
{
public:
	Graduate(char *name,int age,char *sex,char *dept,int salary,char *id,char *classid)
		: Teacher(name, age, sex, dept, salary), Student(name, age, sex, id, classid)	//用虚继承!!!! 
	{	}
	void ShowMe()
	{
		Student :: Show();
		Person :: ShowMe(); 	//'Person' is an ambiguous base of 'Geaduate'？  虚继承就好了 
		Teacher :: Show();
	}
};

int main(){
    char Name[20];
    int Age;
    char Sex[2];
//	char *Sex;			//大概是输入空格不会断开吧？？？？ 
	char Dept[20]; 
	int Salary;
	char Num[12];
	char ClassName[20];   
    cin >> Name >> Age >> Sex >> Dept >> Salary >> Num >> ClassName;
//    cout << Name << Age << Sex << Dept << Salary << Num << ClassName;
    Graduate gra(Name, Age, Sex, Dept, Salary, Num, ClassName);
    gra.ShowMe();
}
