#include<iostream>
using namespace std;
//��ʼ�����ݳ�Ա������
//��ȡ����ֵ������Area()���������
class Trapezium
{
private:
    int ax,ay,bx,by,cx,cy,dx,dy;
public:
    void initial()
    {
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
    }
    void GetPosition(int&,int&,int&,int&,int&,int&,int&,int&)
    {
        ;
    }
    double Area()
    {
        return (bx - ax + dx - cx) * (ay - cy) / 2.0;
    }
};


int main ()
{
    Trapezium my;
    my.initial();
    cout << my.Area();
}

