#include "Client.h"
#include "Person.h"
#include <iostream>
using namespace std;

//the initial value of the counter is 0
int Client::ClientCount = 0;

//the default constructor
Client::Client(string name, string phone, string gender, string email):Person(name,phone,gender)
{	
	++ClientCount;
	this->email = email;
}

//override function to print Info about the client
void Client::print_extra_info()
{
	cout << "Email: " << email << endl;
	cout << "+ + + + + + + + DONE + + + + + + + +  " << endl;
}

//setters functions
void Client::setEmail(const string& email)
{
	this->email = email;
}

//getters functions
string Client::getEmail()
{
	if (!email.empty())
		return email;
	else
		return "Value of email is empty!";
}

//static function to get Client Count
int Client::getClinetCount()
{
	return ClientCount;
}

int Client::getID()
{
	return this->id;
}
