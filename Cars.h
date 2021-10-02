#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cars
{
private:
	Cars();
	struct Car
	{
		Car(int releaseYear, int mileage, string carCode, string markCode, string regNumber, string bodyNumber, string engineNumber, string specialNotations):
			releaseYear(releaseYear), mileage(mileage), carCode(carCode), markCode(markCode), regNumber(regNumber), bodyNumber(bodyNumber), 
			engineNumber(engineNumber){}
		int releaseYear;
		int mileage;
		string carCode;
		string markCode;
		string regNumber;
		string bodyNumber;
		string engineNumber;
		string specialNotations;
	};
	struct Date
	{
		Date(int day, int month, int year) :day(day), month(month), year(year)  {}
		int day;
		int month;
		int year;
	};
	Date lastMaintenanceDate;
	Car car;
	string employeeChauffeurCode;
	string employeeMechanicCode;

public:
	// Accessors and setters
	/*void setReleaseYear(int releaseYear);
	void setMileage(int mileage);
	void setCarCode(string carCode);
	void setMarkCode(string markCode);
	void setRegNumber(string regNumber);
	void setBodyNumber(string bodyNumber);
	void setEngineNumber(string engineNumber);
	void setSpecialNotations(string specialNotations);*/

	Cars(int releaseYear, int mileage, string carCode, string markCode, string regNumber, string bodyNumber, string engineNumber, string specialNotations, 
		int day, int month, int year, string employeeChauffeurCode= "", string employeeMechanicCode = ""):
		car(releaseYear, mileage, carCode, markCode, regNumber, bodyNumber, engineNumber, specialNotations), 
		lastMaintenanceDate(day,month, year), employeeChauffeurCode(employeeChauffeurCode), employeeMechanicCode(){}
	
	void display();

	void setCar(int releaseYear, int mileage, string carCode, string markCode, string regNumber, string bodyNumber, string engineNumber, string specialNotations);
	void setLastMaintenanceDate(int day, int month, int year);
	void setEmployeeChauffeurCode(string EmployeeChauffeurCode) { this->employeeChauffeurCode = EmployeeChauffeurCode; }
	void setEmployeeMechanicCode(string EmployeeMechanicCode) { this->employeeMechanicCode = EmployeeMechanicCode; }
	
	
	string getEmployeeChauffeurCode() { return employeeChauffeurCode; }
	string getEmployeeMechanicCode() { return employeeMechanicCode; }
	Car getCar() { return car; }

};

