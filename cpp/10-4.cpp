#include<iostream>
using namespace std;
class Ellipse 
{
private:
	int x, y;
    double a, b;
public:
    Ellipse(int x, int y, double a, double b)		
	{
        this->a = a;
        this->b = b;
        this->x = x;
        this->y = y;
	}
	double Area()
	{
		return 3.14 * a * b;
	} 
};

int main()
{
    int x, y;
    double a, b;
    cin >> x >> y >> a >> b; 
	Ellipse e1(x, y, a, b);
    cout << e1.Area();
} 
