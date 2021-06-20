#include "Product.h"
#define ERROR_MSG "Something is going wrong! please try again\a";

//static variable 
int Product::ProductNum = 0;

//Default Constructor
Product::Product(string name, float price) {

	//The initial value of this variable is 0
	++ProductNum;

	try {

		this->id = ProductNum;

		//To check if the name length bigger than 0 like -> 'Jon'
		if (name.length() > 0)
			this->name = name;
		else {//if not so the name is ivalid value
			this->name = "NULL";
			throw ERROR_MSG;
		}

		//To check if the value of price is bigger than 0 like '100'
		if (price > 0)
			this->price = price;
		else { //if not so make it 1 and show him error
			this->price = 0;
			throw ERROR_MSG;
		}
	}

	catch (const char* e) {
		cout << e << endl;
	}
}


//Setters Functions
void Product::setName(const string& name) {
	this->name = name;
}

void Product::setPrice(const float& price) {
	this->price = price;
}

//Getters Functions
string Product::getName()
{		    
	return this->name;
}

float Product::getPrice()
{
	return this->price;
}

//Static Function to get Products Count with out calling object
int Product::getProductCount()
{
	return ProductNum;
}

int Product::getID()
{
	return this->id;
}

