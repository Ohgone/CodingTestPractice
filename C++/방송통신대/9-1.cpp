#include "9-1.h"
#include <iostream>
#include <cstring>
#include <utility>

Person::Person(const char *name, const char *addr){
	std::cout << "생성자 동작" << std::endl; 
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	
	this->addr = new char[strlen(addr) + 1];
	strcpy(this->addr, addr);
}

Person::~Person(){
	std::cout << "소멸자 동작" << std::endl;
	delete[] name;
	delete[] addr;
}

void Person::print() const{
	std::cout << "이름 : " << name << " / 주소 : " << addr << std::endl; 
}

void Person::chAddr(const char *newAddr){
	delete[] addr; 
	addr = new char[strlen(newAddr) + 1];
	strcpy(addr, newAddr);
}

Person& Person::operator=(const Person& p){
	delete[] name;
	delete[] addr;
	
	this->name = new char[strlen(p.name) + 1];
	strcpy(this->name, p.name);
	
	this->addr = new char[strlen(p.addr) + 1];
	strcpy(this->addr, p.addr);
	
	return *this;
}

Person& Person::operator=(Person&& p){
	delete[] name;
	delete[] addr;
	
	this->name = p.name;
	this->addr = p.addr;
	
	p.name = nullptr;
	p.addr = nullptr;
	
	return *this;
}

int main(){
	Person* p1 = new Person("황희주", "경기 오산");
	Person* p2 = new Person("오광원", "경기 평택");
	p1->print();
	
	delete p1;
	p1 = nullptr;
	
	p1 = std::move(p2);
	p1->print(); 
	
	delete p1;
	delete p2;
	
}
