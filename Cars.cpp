#include "Cars.h"
#include <iostream>
#include <string>

using namespace std;

void Cars::setCar(int releaseYear, int mileage, string carCode, string markCode, string regNumber, string bodyNumber, string engineNumber, string specialNotations)
{
	car.releaseYear = releaseYear;
	car.mileage = mileage;
	car.carCode = carCode;
	car.markCode = markCode;
	car.regNumber = regNumber;
	car.bodyNumber = bodyNumber;
	car.engineNumber = engineNumber;
	car.specialNotations = specialNotations;
}

void Cars::setLastMaintenanceDate(int day, int month, int year)
{
	lastMaintenanceDate.day = day;
	lastMaintenanceDate.month = month;
	lastMaintenanceDate.year = year;
}

void Cars::display()
{
	cout << "Car info: " << car.releaseYear << ", " << car.mileage <<", "<< car.carCode << ", " << car.markCode << ", " << car.regNumber << ", " << car.bodyNumber
		<< ", " << car.engineNumber << ", " << car.specialNotations << endl;
	
}


