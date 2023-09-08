#include "Car.h"

Car::Car()
{
	this->color = nullptr;
	this->model = nullptr;
	this->year = 0;
	this->price = 0;
}

Car::Car(const char* c, const char* m, int y, double p)
{
	this->setColor(c);
	this->setModel(m);
	this->setYear(y);
	this->setPrice(p);
}
Car::~Car()
{
	delete[] color;
	delete[] model;
}

void Car::input()
{
	double buff2;
	char buff[100];
	cout << "Enter color: ";
	cin >> buff;
	this->setColor(buff);
	cout << "Enter model: ";
	cin >> buff;
	this->setModel(buff);
	cout << "Enter year: ";
	cin >> this->year;
	cout << "Enter price";
	cin >> this->price;
}

void Car::print()
{
	cout << "Color: " << this->getColor() << endl;
	cout << "Model: " << this->getModel() << endl;
	cout << "Year: " << this->getYear() << endl;
	cout << "Price: " << this->getPrice() << "\n\n";
}

void Car::setColor(const char* n)
{
	if (this->color != nullptr)
	{
		delete[]this->color;
	}
	this->color = new char[strlen(n) + 1];
	strcpy_s(this->color, strlen(n) + 1, n);
}

void Car::setModel(const char* n) 
{
	if (this->model != nullptr)
	{
		delete[]this->model;
	}
	this->model = new char[strlen(n) + 1];
	strcpy_s(this->model, strlen(n) + 1, n);
}

void Car::setYear(int y)
{
	this->year = y;
}

void Car::setPrice(double p)
{
	this->price = p;
}

char* Car::getColor()
{
	return this->color;
}

char* Car::getModel()
{
	return this->model;
}

int Car::getYear()
{
	return this->year;
}

double Car::getPrice()
{
	return this->price;
}
