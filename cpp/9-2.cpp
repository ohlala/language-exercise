#include<iostream>
using namespace std;
class Dog
{
private:
    char name[20];
    int age;
    char sex;
    double weight;
public:
    void setdata()
    {
        cin >> name >> age >> sex >> weight;
    }
    char* GetName()
    {
        return name;
    }
    int GetAge()
    {
        return age;
    }
    char* GetSex()
    {
        if (sex == 'm')
            return "male";
        else
            return "fmale";
    }
    double GetWeight()
    {
        return weight;
    }
};

int main ()
{
    Dog mydog;
    mydog.setdata();
    cout <<"It is my dog." << endl;
    cout <<"Its name is " << mydog.GetName() << '.' << endl;
    cout <<"It is " << mydog.GetAge() << " years old." << endl ;
    cout <<"It is " << mydog.GetSex() << '.' << endl;
    cout <<"It is " << mydog.GetWeight() << " kg.";
}
