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
		//strcpy(Sex, sex); 	//����д�����Ⱑ������  �����ַ���������ַ�ָ�� 
    }
    void ShowMe()
    {
    	cout << "���� " << Name << endl;
    	cout << "�Ա� " << (*Sex == 'm'? "��":"Ů") << endl << "���� " << Age << endl;
    }
};

class Teacher: virtual public Person	//���ζ�����������ʹ��virtual����̳� 
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
    	cout <<"������λ "<< Dept <<endl << "��н " << Salary;
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
    	cout << "�༶ " << Class << endl;
		cout << "ѧ�� " << ID << endl;
    }
};

class Graduate : public Teacher, Student
{
public:
	Graduate(char *name,int age,char *sex,char *dept,int salary,char *id,char *classid)
		: Teacher(name, age, sex, dept, salary), Student(name, age, sex, id, classid)	//����̳�!!!! 
	{	}
	void ShowMe()
	{
		Student :: Show();
		Person :: ShowMe(); 	//'Person' is an ambiguous base of 'Geaduate'��  ��̳оͺ��� 
		Teacher :: Show();
	}
};

int main(){
    char Name[20];
    int Age;
    char Sex[2];
//	char *Sex;			//���������ո񲻻�Ͽ��ɣ������� 
	char Dept[20]; 
	int Salary;
	char Num[12];
	char ClassName[20];   
    cin >> Name >> Age >> Sex >> Dept >> Salary >> Num >> ClassName;
//    cout << Name << Age << Sex << Dept << Salary << Num << ClassName;
    Graduate gra(Name, Age, Sex, Dept, Salary, Num, ClassName);
    gra.ShowMe();
}
