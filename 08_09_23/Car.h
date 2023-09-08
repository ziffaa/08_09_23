#include <iostream>

using namespace std;

class Car
{
private:
	char* color;
	char* model;
	int year;
	double price;
public:
	Car();
	Car(const char*,const char*, int, double);
	~Car();
	void input();
	void print();
	
	char* getColor();
	char* getModel();
	int getYear();
	double getPrice();

	void setColor(const char*);
	void setModel(const char*);
	void setYear(int);
	void setPrice(double);
	
};

