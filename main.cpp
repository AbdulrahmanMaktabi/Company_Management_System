#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Product.h"
#include "Order.h"
#include "Company.h"
using namespace std; 

int main()
{
    Client client("ahmed khalid", "9055234345", "Male", "ahmad@hotmail.com");
    Employee employee("reem yousuf", "123456789", "Female", 2500.24, "5 Hours at Day");

    Client* ptrC = &client;
    Employee* ptrE = &employee;

    Product product1("iphone 5", 1500);
    Product product2("SSD 1TB", 500);
    Product product3 = Product("HDD 1TB", 70);
    Product product4("AMD 3 5600X", 3400);
    Product product5("Inted Core i7 7700hq", 2345);
    Product product6 = Product("Mouse", 8);
    Product product7 = Product("Table", 44.55);

    
    vector<Product>  order1Products;
    order1Products.push_back(product1);
    order1Products.push_back(product2);
    order1Products.push_back(product3);

    vector<Product> order2Products;
    order2Products.push_back(product4);
    order2Products.push_back(product5);
    order2Products.push_back(product6);


    Order order1("12/12/2002", true, ptrC, order1Products);
    Order order2("03/11/1999", false, ptrE, order2Products);

    Company company = Company();

    company.addPerson(ptrC);
    company.addPerson(ptrE);

    company.addProduct(product1);
    company.addProduct(product2);
    company.addProduct(product3);
    company.addProduct(product4);
    company.addProduct(product5);
    company.addProduct(product6);

    company.addOrder(order1);
    company.addOrder(order2);

    company.printPersonInfo(1);
    company.printPersonInfo(2);
    company.printPersonInfo(3);


    company.printProductInfo(1);
    company.printProductInfo(2);
    company.printProductInfo(3);
    company.printProductInfo(4);
    company.printProductInfo(5);
    company.printProductInfo(6);

    company.printPersonOrders(1);
    company.printPersonOrders(2);


    
    return 0;
}
