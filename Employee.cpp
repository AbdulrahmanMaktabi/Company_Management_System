#include "Employee.h"
#include <iostream>
using namespace std;

//static variable to count Employees
int Employee::EmployeeCount = 0;

//Default Constructor
Employee::Employee(string name, string phone, string gender, float salary, string wokingTime):Person(name , phone , gender)
{
	++EmployeeCount;
	this -> salary = salary;
	this->wokingTime = wokingTime;
}

//Setters functions
void Employee::setSalary(const float& salary)
{	
	if (salary > 0)
		this->salary = salary;
	else
		this->salary = 0;
}

void Employee::setwokingTime(const string& wokingTime)
{
	this->wokingTime = wokingTime;
}

//Getters Functions
float Employee::getSalary()
{
	return salary;
}

string Employee::getwokingTime()
{
	return wokingTime;
}

//Static Function to get Employees Count with out calling object
int Employee::getEmployeeCount()
{
	return EmployeeCount;
}

//Override Functions to Show Person info + Employee Attributes -> salary , working time
void Employee::print_extra_info()
{
	cout << "Salary: " << salary << endl;
	cout << "Working Time: " << wokingTime << endl;
	cout << "+ + + + + + + + DONE + + + + + + + +  " << endl;
}

int Employee::getID()
{
	return this->id;
}
