#include "Database.h"
#include <vector>

void Database::addCar(const Cars& car)
{
	vCars.push_back(car);
}

void Database::deleteCar(const string& carCode)
{
	if (vCars.size() == 0) throw 1;

	bool success = 0;
	for (int i = 0; i < vCars.size(); i++)
	{
		if (vCars[i].getCar().carCode == carCode)
		{
			vCars.erase(vCars.begin() + i);
			success = 1;
		}
		if (success == 0) throw 2;
	}
	
}

void Database::displayAll()
{
	if (vCars.size() == 0) throw 1;

	for (auto i : vCars)
	{
		i.display();
		cout << endl;
	}
}

void Database::displayCar(const string& carCode)
{
	if (vCars.size() == 0) throw 1;
	bool success = 0;
	for (auto i : vCars)
	{
		if (i.getCar().carCode == carCode)
		{
			i.display();
			success = 1;
		}
		if (success == 0) throw 2;
	}
}
