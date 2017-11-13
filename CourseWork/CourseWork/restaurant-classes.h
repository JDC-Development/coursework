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
	int SetMenu(string *NameOfDish, string *Ingredients, double *Count);
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

