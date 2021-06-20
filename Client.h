#pragma once
#include "Person.h"

class Client : public Person
{
private:
	string email;
public:

	//static variable to count the number of clients
	static int ClientCount;

	//Default Constructor
	Client(string name, string phone, string gender, string email);

	//Override Function to show 'Client' Extra Information -> Email
	void print_extra_info() override;

	//Setters Functions
	void setEmail(const string& email);

	//Getters Functions
	string getEmail();

	//Static Function to get Clinets Count
	static int getClinetCount();

	int getID() override;

};

