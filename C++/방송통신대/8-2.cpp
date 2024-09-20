#include <iostream>

using namespace std;

class IntClass{
	int value;
public:
	IntClass(int n) : value(n){};
	IntClass& operator++(){
		value++;
		return *this;
	}
	IntClass operator++(int){
		IntClass temp(*this);
		value++;
		return temp;
	}
	IntClass& operator+=(int i){
		value += i;
		return *this;
	}
	
	friend ostream& operator<<(ostream& os, IntClass i);
};

ostream& operator<<(ostream& os, IntClass i){
	os << i.value << "입니다." << endl;
	return os;
}

int main(){
	IntClass i(30);
	i += 10;
	cout << i;
	cout << ++i;
}
