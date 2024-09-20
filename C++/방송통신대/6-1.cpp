#include <iostream>
#include <cstring>

class NClass{
	char* name;
public:
	NClass(const char* str=nullptr){
		if(str){
			name = new char[strlen(str) + 1];
			strcpy(name, str);
		}
		else{
			name = nullptr;
		}
	}
	
	NClass(const NClass x&){
		if(x.name){
			name = new char[strlen(x.name) + 1];
			strcpy(name, x.name);
		}
		else {
			name = nullptr;
		}
	}
	
	NClass(NClass x&&) : name(x.name){
		x.name = nullptr
	}
	
	void whoRU() const{
		std::cout << "나는" << name << "입니다." << std::endl;
	}
};

int main(){
	NClass n("홍길동");
	n.whoRU();	
	return 0;
}
