#pragma once
#include <iostream>
using namespace std;

class Product
{
protected:
	int id;
	string name;
	float price;
public:
	//Static Variable to count product and give id to each procuct
	static int ProductNum;

	//Counstructor
	Product(string name, float price);
	
	//Setters Functions
	void setName(const string& name);

	void setPrice(const float& price);

	//Getters Functions
	string getName();

	float getPrice();

	//Static Function to get Products Count
	static int getProductCount();

	int getID();

};

