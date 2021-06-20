#pragma once
#include "Order.h"
#include "Person.h"
#include "Product.h"
#include "Client.h"
#include "Employee.h"
#include <vector>
#include <iostream>
using namespace std;


class Company 
{
private:

public:

	vector<Person*> PersonsVec;
	vector<Product> ProductVec;
	vector<Order> OrderVec;

	void addProduct(const Product& product);
	void addPerson(Person* person);
	void addOrder(const Order& order);
	void removeProduct(int id);
	void removePerson(int id);
	void removeOrder(int id);
	void printPersonInfo(int id);
	void printProductInfo(int id);
	void printOrderDetails(int id);
	void printPersonOrders(int id);


	
};