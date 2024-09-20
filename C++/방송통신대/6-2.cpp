#include <iostream>
#include <string>

class S{
	std::string name;
	int no;
	static int NO;
public:
	S(const std::string& n) : name(n), no(++NO){};
	void print(){
		std::cout << "이름 : " << name << ", 순번 : " << no << std::endl; 
	}
};

int S::NO = 0;

int main(void){
	S s("홍길동");
	s.print();
	
	S s2("전우치");
	s2.print();
}
