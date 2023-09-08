#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	Car car1("white", "audi r8", 2007, 50505.5050);
	car1.print();
	car1.setColor("red");
	car1.print();
}