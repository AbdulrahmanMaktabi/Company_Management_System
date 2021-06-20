#include "Company.h"
#include "Person.h"
#include "Product.h"
#include "Order.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<Person*> PersonsVec;
vector<Product> ProductVec;
vector<Order> OrderVec;

void Company::addProduct(const Product& product)
{
	ProductVec.push_back(product);
}

void Company::addPerson(Person* person)
{
	PersonsVec.push_back(person);
}

void Company::addOrder(const Order& order)
{
	OrderVec.push_back(order);
}

void Company::removeProduct(int id)
{
	int ProductVectorSize = ProductVec.size();

	for (unsigned i = 0; i < ProductVectorSize; i++) {
		if (ProductVec.at(i).getID() == id) {
			ProductVec.erase((ProductVec.begin() + i)-1);
			return;
		}
	}

	cout << "Product with ID '" << id << "' is not found!\a" << endl;
	cout << "----------------------\n";

}

void Company::removePerson(int id)
{
	int PersonVectorSize = PersonsVec.size();

	for (unsigned i = 0; i < PersonVectorSize; i++) {
		if (PersonsVec.at(i)->getID() == id) {
			PersonsVec.erase((PersonsVec.begin() + id) - 1);
			return;
		}
	}

	cout << "Person with ID '" << id << "' not found!\a" << endl;
	cout << "----------------------\n";

}

void Company::removeOrder(int id)
{
	int OrderVectorSize = OrderVec.size();

	for (unsigned i = 0; i < OrderVectorSize; i++) {
		if (OrderVec.at(i).getID() == id) {
			OrderVec.erase((OrderVec.begin() + id) - 1);
			return;
		}
	}

	cout << "Order with ID '" << id << "' not found!\a" << endl;
	cout << "----------------------\n";

}

void Company::printPersonInfo(int id)
{
	int PersonVectorSize = PersonsVec.size();
	
	for (unsigned i = 0; i < PersonVectorSize; i++) {
		if (PersonsVec.at(i)->getID() == id) {
			cout << "Person with ID " << id << " info." << endl;
			cout << "Name: " << PersonsVec.at(i)->getName() << endl;
			cout << "Phone Number: " << PersonsVec.at(i)->getPhone() << endl;
			cout << "Gender : " << PersonsVec.at(i)->getGender() << endl;
			PersonsVec.at(i)->print_extra_info();
			return;
		}
	}

	cout << "Person wit ID '" << id << "' not found!\a" << endl;
	cout << "----------------------\n";

}

void Company::printProductInfo(int id)
{
	int ProductVectorSize = ProductVec.size();

	for (unsigned i = 0; i < ProductVectorSize; i++) {
		
		if (ProductVec.at(i).getID() == id) {
			cout << "Prodcut with ID '" << id << "' Info." << endl;
			cout << "Product Name: " << ProductVec.at(i).getName() << endl;
			cout << "Product Price: " << ProductVec.at(i).getPrice() << endl;
			cout << "++++++++++++++ DONE ++++++++++++++" << endl;
			return;
		}
	}

	cout << "Product with ID '" << id << "' is not found!\a" << endl;
	cout << "----------------------\n";
}

void Company::printOrderDetails(int id)
{
	int OrderVectorSize = OrderVec.size();

	for (unsigned i = 0; i < OrderVectorSize; i++) {

		if (OrderVec.at(i).getID() == id) {

			cout << "Order with ID '" << id << "' info." << endl;
			cout << "Date: " << OrderVec.at(i).getDate() << endl;
			cout << "Paid Info: " << (OrderVec.at(i).getPaid()) ? "Yes\n" : "No\n";
			cout << "Ordered by: " << OrderVec.at(i).get_person_name() << endl;
			cout << "Products: " << endl;
			OrderVec.at(i).get_products();
			cout << "Total: " << OrderVec.at(i).get_totalSum() << endl;
			cout << "++++++++++++ DONE +++++++++++" << endl;
			return;
		}
	}

	cout << "Order with ID '" << id << "' not found!\a" << endl;
	cout << "------------------------" << endl;
}

void Company::printPersonOrders(int id)
{
	int PersonsVectorSize = PersonsVec.size();

	for (unsigned i = 0; i < PersonsVectorSize; i++) {
		
		if (OrderVec.at(i).get_person_id() == id) {
			
			cout << "All Orders made by Person with name '" << OrderVec.at(i).get_person_name() << ": \n";

			for (unsigned j = 0; j < OrderVec.size(); j++) {
				if (OrderVec.at(j).get_person_id() == id) {
					cout << "Date: " << OrderVec.at(j).getDate() << endl;
					cout << "Paid Info: " << (OrderVec.at(j).getPaid()) ? "Yes\n" : "No\n";
					cout << "Ordered by: '" << OrderVec.at(j).get_person_name() << "' \n";
					cout << "Products: " << endl;
					OrderVec.at(j).get_products();
					cout << "Total Sum: " << OrderVec.at(j).get_totalSum() << " $" << endl;
				}
			}
			cout << "+++++++++++ DONE ++++++++++" << endl;
			return;
		}
	}
	cout << "Person wit ID '" << id << "' not found!" << endl;
	cout << "----------------------------" << endl;
}
