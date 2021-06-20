#include "Order.h"
#include "Person.h"
#include "Product.h"

//Static Variable to set ID to each order
int Order::OrderNum = 0;

//Constructor
Order::Order(string date, bool isPaid , Person *person , vector <Product> vec)
{
	++OrderNum;

	this->id = OrderNum;
	this->date = date;
	this->isPaid = isPaid;
	this->person = person;
	this->vec = vec;
}

//Setters Functions

void Order::setDate(const string& date)
{
	this->date = date;
}

void Order::setPaid(const bool& isPaid)
{
	this->isPaid = isPaid;
}

//Getters Functions

string Order::getDate()
{
	return this->date;
}

bool Order::getPaid()
{
	return this->isPaid;
}

//to show order ID

int Order::getID()
{
	return this->id;
}

/*
* XXXXXXXXXXXXXXXXXXXXXXX
*/
string Order::get_person_name()
{
	return person->getName();
}

int Order::get_person_id()
{
	return person->getID();
}

int Totalsum = 0;

void Order::get_products()
{
	for (unsigned i = 0; i < vec.size(); i++) {
		Totalsum += vec.at(i).getPrice();
		cout << "Product -" << i + 1 << "- " << vec.at(i).getName() << endl;
	}
}

int Order::get_totalSum()
{
	return Totalsum;
}

