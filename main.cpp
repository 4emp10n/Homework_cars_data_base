#include <iostream>
#include <string>
#include "Cars.h"
#include "Database.h"

using namespace std;

int displayMenu();
Cars addCarInput()
{
	int releaseYear;
	int mileage;
	string carCode;
	string markCode;
	string regNumber;
	string bodyNumber;
	string engineNumber;
	string specialNotations;
	int day;
	int month;
	int year;
	cout << "Enter releaseYear: ";
	cin >> releaseYear;
	cout << "Enter mileage: ";
	cin >> mileage;
	cout << "Enter carCode: ";
	cin >> carCode;
	cout << "Enter markCode: ";
	cin >> markCode;
	cout << "Enter regNumber: ";
	cin >> regNumber;
	cout << "Enter bodyNumber: ";
	cin >> bodyNumber;
	cout << "Enter engineNumber: ";
	cin >> engineNumber;
	cout << "Enter specialNotations: ";
	cin >> specialNotations;
	cout << "Enter day: ";
	cin >> day;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter year: ";
	cin >> year;
	Cars car(releaseYear, mileage, carCode, markCode, regNumber, bodyNumber, engineNumber, specialNotations, day, month, year);
	return car;
}

int main()
{
	
	Database employeeDB;
	bool done = false;
	while (!done) 
	{
		int selection = displayMenu();
		switch (selection) 
		{
		case 1:
		{
			employeeDB.addCar(addCarInput());
			break;
		}
		case 2:
		{
			string carCode;
			cout << "Enter carCode: ";
			cin >> carCode;
			employeeDB.deleteCar(carCode);
			break;
		}
		case 3:
		{
			string carCode;
			cout << "Enter carCode: ";
			cin >> carCode;
			employeeDB.displayCar(carCode);
			break;
		}	
		case 4:
			employeeDB.displayAll();
			break;
		case 0:
			done = true;
			break;
		default:
			cerr << "Unknown command." << endl;
		}
	}
}


int displayMenu()
{
	int selection;
	cout << endl;
	cout << "Employee Database" << endl;
	cout << "-----------------" << endl;
	cout << "1) Add a new car" << endl;
	cout << "2) Delete car" << endl;
	cout << "3) Display car" << endl;
	cout << "4) Disaply all cars" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "---> ";
	cin >> selection;
	return selection;
}



