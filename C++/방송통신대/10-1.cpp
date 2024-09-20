#include "10-1.h"

class Athlete : public Person{
	string team;
public:
	Athlete(const string& n, const string& t) : Person(n), team(t){};
	void setTeam(const string& t){
		team = t;
	}
	void print(){
		cout << getName() << "의 소속팀은 " << team << endl;
	}
};

int main(){
	Person p("오광원");
	p.print();
	
	Athlete a("오광원", "기아타이거즈");
	a.print();
	a.setTeam("한화 이글스");
	a.print();
}
