#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	float salary;
	string wokingTime;
public:
	//static variable to count the number of Employees
	static int EmployeeCount;
	
	//Default Constructor
	Employee(string name, string phone, string gender, float salary, string wokingTime);

	//Setters Function
	void setSalary(const float& salary);

	void setwokingTime(const string& wokingTime);

	//Getters Functions
	float getSalary();

	string getwokingTime();

	//Static Function to get all Employee Count
	static int getEmployeeCount();

	//Overrid Function to show Person info + employee attributes -> salary , working time
	void print_extra_info() override;

	int getID() override;

};

