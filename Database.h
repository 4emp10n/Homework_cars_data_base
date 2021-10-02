#pragma once
#include <iostream>
#include <vector>
#include "Cars.h"


class Database
{
public:
	void addCar(const Cars& car);
	void deleteCar(const string& carCode);
	void displayAll();
	void displayCar(const string& carCode);
	
protected:
	vector<Cars> vCars;
};

