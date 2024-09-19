#include <iostream>

class Box{
	int height, width, depth;
public:
	void init(int h, int w, int d){
		height = h;
		width = w;
		depth = d;
	}
	int volume() const {
		return height * width * depth;
	}
};

int main(){
	Box b;
	b.init(3, 6, 9);
	std::cout << b.volume(); 
	return 0;
}
