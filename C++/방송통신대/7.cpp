#include <iostream>

class CharStack{
	int top;
	int stackSize;
	char* buf;
public:
	CharStack(int size) : top(size), stackSize(size){
		buf = new char[size + 1];
	}
	~CharStack(){
		delete[] buf;
	}
	bool chkEmpty(){
		if(top==stackSize) return true;
		else return false;
	}
	bool chkFull(){
		if(top==0) return true;
		else return false;
	}
	bool push(char c){
		if(chkFull()) return false;
		else buf[--top] = c; return true;
	}
	char pop(){
		if(chkEmpty()) return '\0';
		else return buf[top++];
	}
	int size(){
		return stackSize;
	}
};

int main(){
	CharStack s(13);
	std::cout << s.size() << std::endl;;
	s.push('A');
	std::cout << s.pop();
}
