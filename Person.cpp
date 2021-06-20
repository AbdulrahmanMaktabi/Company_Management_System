#include "Person.h"
#include <iostream>
#include <string>

#define ERROR_MSG "Something is going wrong! please try again\a";

bool isGender(string gender) {
	if (gender == "male" || gender == "Male" || gender == "female" || gender == "Female")
		return true;
	return false;
}

//static variable to get person count and to give person id number automatically
int Person::idNum = 0;

Person::Person(string name, string phone, string gender )
{
	//The initial value of this variable will be 0 so i will add one when ceate new object
	++idNum;

	this->id = idNum;

	try {
		//To check if the name length bigger than 0 like -> 'Jon'
		if (name.length() > 0)
			this->name = name;
		else //if not so the name is ivalid value
			throw ERROR_MSG;

		//To check if the phone number length bigger than 6 like -> '0123456789'
		if (phone.length() > 6)
			this->phone = phone;
		else //if not so the phone number is ivalid value
			throw ERROR_MSG;

		//To check if the gender male or female -> 'Male OR Female'
		if(isGender(gender))
			this->gender = gender;
		else //if not so the gender is invalid value
			throw ERROR_MSG; 
	}
	//we are using catch to catch the error and show it to user 
	catch (const char* e) {
		cout << e << endl;
	}
}

//normal function to show person info , we will use it for override 
void Person::print_extra_info()
{}

//Setters Functions
void Person::setName(const string& name)
{
	//if the length of the name varialbe equal 0 than don't take it and repeat to ask
	do {
		this->name = name;
	} while (name.length() == 0);
}

void Person::setPhone(const string& phone)
{	
	//if the length of the phone number varialbe less than 6 so don't take it and repeat to ask
	do {
		this->phone = phone;
	} while (phone.length() < 6);
}

void Person::setGender(const string& gender)
{	
	//if the value of the gender not [Male or Female] so don't take it and repeat to ask
	do {
		this->gender = gender;
	} while (!isGender(gender));
}

//Getters Functions
int Person::getID()
{
	return this->id;
}

string Person::getName()
{	
	//if the name value not empty return it!
	if (!name.empty())
		return name;
	else
		return ERROR_MSG;
}

string Person::getPhone()
{	
	//if the phone number value not empty return it!
	if (!phone.empty())
		return phone;
	else
		return ERROR_MSG;
}

string Person::getGender()
{	
	//if the gender value not empty return it!
	if(!gender.empty())
		return gender;
	else
		return ERROR_MSG;
}

//Static Function to get count of Persons [client + employee]
int Person::getPersonCount()
{
	if(idNum > 0)
		return idNum;
	else
		return 0;
}

