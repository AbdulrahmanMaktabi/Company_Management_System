#pragma once
#include <iostream>
#include "Person.h"
#include "Product.h"
#include <vector>
using namespace std;

class Order 
{
	//XXXXXXXXXXXXXXX
protected:
	int id;
	string date;
	bool isPaid;
	Person* person;
	vector <Product> vec;
public:
	
	//Static Variable
	static int OrderNum;

	//Constructor
	Order(string date, bool isPaid, Person *person , vector <Product> vec);
	  
	//Setters Functions
	void setDate(const string& date);

	void setPaid(const bool& is_paid);
	
	//Getters Functions

	//to show Order Date
	string getDate();

	//to show if the order paid or not
	bool getPaid();
	
	//to get order ID
	int getID();


	/*
	* XXXXXXXXXXXX
	*/
	string get_person_name();

	int get_person_id();

	void get_products();

	int get_totalSum();
};

