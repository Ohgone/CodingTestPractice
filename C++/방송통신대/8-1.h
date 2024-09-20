#include <iostream>

using namespace std;

class Pencils {
	int dozens;
	int np;
public:
	Pencils() : dozens(0), np(0) {};
	Pencils(int n){
		dozens = n / 12;
		np = n % 12;
	}
	Pencils(int d, int n) : dozens(d), np(n){};
	Pencils& operator++();
	Pencils operator++(int);
	void display() const;
	Pencils operator+(const Pencils& p) const;
	Pencils operator-(const Pencils& p) const;
	friend ostream& operator<<(ostream& os, const Pencils& p);
};
