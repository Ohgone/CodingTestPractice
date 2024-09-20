#include <iostream>

using namespace std;

class Shape{
public:
	virtual double aria() const = 0;
	virtual void print() const = 0;
};

class Circle : public Shape{
	double x, y, r;
public:
	Circle(double x, double y, double r) : x(x), y(y), r(r){}
	double aria() const{
		return r * r * 3.14159;
	}
	void print() const{
		cout << "원의 좌표는 (" << x << "," << y << ")이고, 반지름은" << r << "입니다." << endl;
	}
};

class Rectangle : public Shape{
	double x1, y1, x2, y2;
public:
	Rectangle(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2){}
	double aria() const{
		return (x2 - x1) * (y2 - y1);
	}
	void print() const{
		cout << "사각형의 좌표는(" << x1 << "," << y1 << ") (" << x2 << "," << y2 << ") 입니다." << endl;
	}
};

int main(){
	Circle c(3.0, 5.0, 10.0);
	cout << c.aria() << endl;
	c.print();
	
	Rectangle r(1, 2, 3, 4);
	cout << r.aria() << endl;
	r.print();
}
