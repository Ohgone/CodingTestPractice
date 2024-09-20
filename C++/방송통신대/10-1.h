#ifndef PERSON1_H_INCLUDED
#define PERSON1_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Person{
	string name;
public:
	Person(const string& n) : name(n){};
	void setName(const string& n) {
		name = n;
	}
	string getName() const{
		return name;
	}
	void print() const{
		cout << name << endl;;
	}
};

#endif
