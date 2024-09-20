class Person {
	char *name;
	char *addr;
public:
	Person(const char *name, const char *addr);
	~Person();
	void print() const;
	void chAddr(const char *newAddr);
	Person& operator=(const Person& p);
	Person& operator=(Person&& p);
};
