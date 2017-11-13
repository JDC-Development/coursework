#pragma once
#include <iostream>
#include <string>

using namespace std;

/*Author: Semerenko CS-16
				Our Main class
RestouranMainClass(); - default constructor
~RestouranMainClass(); - default destructor*/
class RestouranMainClass
{
public:
	int SetRestouranMainClass(string, double, int, int, int, string, string, int, string, string, &, string);
	RestouranMainClass();
	~RestouranMainClass();
private:

};

/*Author: Klymenko CS-16
				Inherit class with menu
Menu - default constructor
~Menu - default destructor
int SetMenu() - Setter. He's returned checked values*/
class Menu :public RestouranMainClass
{
public:
	Menu();
	~Menu();
private:
	int SetMenu(string *NameOfDish, string *Ingredients, double *Price);
};

class Tables: public RestouranMainClass
{
public:
	Tables();
	~Tables();
	int SetTables(int AllTables, int FreeTables, int OrderTables);
};

class Staff : public RestouranMainClass
{
public:
	Staff();
	~Staff();
	int SetStaff(string Post, string Name, int Expirience);
};

class AboutUs : public RestouranMainClass
{
public:
	AboutUs();
	~AboutUs();
	int SetAboutUs(string AllInformation, string Reviews);
};

class Opening : public RestouranMainClass
{
public:
	Opening();
	~Opening();
	int SetOpening(string NameOfOpening, string Requirement, int Age, int ExpOfWork);
};

class Events : public RestouranMainClass
{
public:
	Events();
	~Events();
	int SetEvents(Date, string Event);
};

class Order :public RestouranMainClass
{
public:
	Order();
	~Order();
	int SetOrder(Date, int NumberOfTables, string NameOfCusromer)
};

class Basket :public RestouranMainClass
{
public:
	Basket();
	~Basket();
	int SetBasket(string NameOfDish, int Price, string Address)
};