#include<iostream>
#include<cstring>

using namespace std;
class Dog
{
private:
    char name[20];
    int age;
    char sex;
    double weight;
public:
	Dog (char* a, int b, char c, double d)
	{
        strcpy(name, a);     				//可以用strcpy函数初始化字符串数组 
		age = b;
		sex = c;
		weight = d;		
	}
    char* GetName()
    {
        return name;
    }
    int GetAge()
    {
        return age;
    }
    char GetSex()
    {
        return sex;
    }
    double GetWeight()
    {
        return weight;
    }
    void speak()
	{
        cout << "Arf!Arf!";
	}
};

int main ()
{
    char name[20], sex; int age; double weight;
	cin >> name >> age >> sex >> weight; 
	Dog mydog(name, age, sex, weight);
    cout << mydog.GetName() << endl;
    cout << mydog.GetAge() << endl ;
    cout << mydog.GetSex() << endl;
    cout << mydog.GetWeight() << endl;
    mydog.speak();
}
