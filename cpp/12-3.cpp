#include<iostream>
#include<cstring>
using namespace std;
class complex{
	int a, b;
public: 
	complex (int a = 0, int b = 0){	//��Ĭ�ϲ����Ĺ��캯���Ƿ���Դ�����ʵ�εĹ��캯��?  ������ 
		this->a = a;
		this->b = b;
	}
	
	complex operator+(complex &com){
//	complex complex::operator+(complx &com){};   //ʵ������������ʱ��ôд��operator+�൱�ں����� 

		complex temp;	//ʹ����ʵ�εĹ��캯�������������󲻿��Դ����ţ�������Ҫ�� 
		temp.a = a + com.a;
		temp.b = b + com.b;
		return temp;

//		int x, y; 			//�ú�����������ʵ�ַ�ʽ������ȷ�� 
//		x = a + com.a;
//		y = b + com.b;
//		return complex(x, y);
	}
	
//	complex operator=(complex &com){
//		a = com.a;
//		b = com.b;
//	}
	friend ostream &operator<<(ostream &stream,const complex &com); 	//comҪ��const��ԭ������������ 
};
//��Ԫ������ó�Ա����ʱ,ֻ��Ҫһ������,��һ��������thisָ�봫�롣
//�����Ҫ������������ô�����������涨�壬Ȼ������������Ϊ��Ԫ��
//���ز�ʵ����complex���⣬��Ϊ<<�����������ostream��istream��ġ�����Ԫ�������ǳ�Ա������
ostream &operator<<(ostream &stream, const complex &com){		//��һ��ostream�Ƿ���ֵ���ڶ���ostream�ǲ���(cout)
		stream << com.a << "+j" << com.b << endl;		//��Ϊ��������Ԫ�������Կ�����.��������������� 
		return stream;
}

 int main()
{
    int a, b;
    cin >> a >> b;
    complex m(a, b);
    cin >> a >> b;
    complex n(a, b);
    cout << m << n;
    cout << m + n;		//m+n�Ľ������ʱֵ����Ϊ���ô������ص�<<��ʱ�������ں���ͷconst
}
