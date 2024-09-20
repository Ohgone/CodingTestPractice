#include "8-1.h"
#include <iostream>

void Pencils::display() const{
	cout << dozens << "타 " << np << "자루" << endl;
}

Pencils& Pencils::operator++(){
	if (++np >= 12){
		++dozens;
		np=0;
	}
	return *this;
}

Pencils Pencils::operator++(int){
	Pencils tmp(*this);
	if (++np >= 12){
		++dozens;
		np=0;
	}
	return tmp;
}

Pencils Pencils::operator+(const Pencils& p) const{
	int n = (dozens + p.dozens) * 12 + (np + p.np);
	return Pencils(n);
}

Pencils Pencils::operator-(const Pencils& p) const{
	int n = (dozens - p.dozens) * 12 + (np - p.np);
	if(n <= 0) return Pencils(0);
	return Pencils(n);
}

ostream& operator<<(ostream& os, const Pencils& p){
	if(p.dozens){
		os << p.dozens << "타 ";
		if(p.np){
			os << p.np << "자루" << endl;
		}
	}
	else{
		os << p.np << "자루" << endl;
	}
	return os;
}

int main(){
	Pencils p1(5, 10);
	Pencils p2(3, 5);
	
	Pencils p3 = p1 - p2;
	cout << p3;
	
	return 0;
}
