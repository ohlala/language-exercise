#include<iostream>
#include<cstring>

using namespace std;
class Person
{
private:
    char name[20], sex;
    int age;
public:
	Person()
	{
		strcpy(name, "XXX");
		sex = 'm';
		age = 0;
	}
	~ Person()
	{
	    cout << "Now destroying the instance of Person"; 
	}
    void Register(char* a,int b, char c)
    {
        strcpy(name, a);
        age = b;
        sex = c;
    }
    void ShowMe()
    {
        cout << name << ' ' << age
            << ' ' << sex << endl;
    }
};
int main()
{
    Person *p1, *p2;
    p1 = new Person();
	p2 = new Person();
	cout << "person1:";
	p1->ShowMe();
	cout << "person2:";
	p2->ShowMe();
	char name[20], sex;    int age;
    cin >> name >> age >> sex;
    p1->Register(name, age, sex);
	*p2 = *p1; 						//复制对象的值  ！！深拷贝 
	cout << "person1:";
	p1->ShowMe();
	cout << "person2:";
	p2->ShowMe();
	delete p1;
    cout << endl;
	delete p2;
	return 0;
}

