#pragma once
#include <iostream>

using namespace std;
class Person
{
protected:
	int id;
	string name;
	string phone;
	string gender;
public:
	
	//static variable to Give each person an ID number
	static int idNum;

	//Default Constructor
	Person(string name, string phone, string gender);

	//Function to print extra information about person
	virtual void print_extra_info();

	//Setters Functions
	virtual void setName(const string& name);

	virtual void setPhone(const string& phone);

	virtual void setGender(const string& gender);

	//Getters Functions
	virtual int getID();

	virtual string getName();

	virtual string getPhone();

	virtual string getGender();

	//To get count of person [Client + Employee] we should call stattic function ->
	static int getPersonCount();
	
};