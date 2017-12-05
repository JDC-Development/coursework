#include <string>
using namespace std;
class Table {
	int CountTableAll, CountTableFree, CountTableBooking;
public:
	Table();
	//~Table();
	int TableFree(int, int);
	void SetTable(int, int);
};

class Personal
{
	int CountAllPersonal;
	string NamePersonal;
public:
	Personal();
	void SetPersonal(int,string);
	//~Personal();
};

class Drinks
{
protected:
	string NameOfDrink;
	int *CountOfDrink;
public:
	Drinks();
	void SetDrinks(string , int*);
	//~Drinks();
};

class FirstDishes
{
protected:
	string NameOfFirstDish;
	double CountOfFirstDish[10];
public:
	FirstDishes();
	FirstDishes(string, double);
	void SetFirstDishes(string, double[]);
	//~FirstDishes();
};

class SecondDishes
{
protected:
	string NameOfSecondDish;
	double *CountOfSecondDish;
public:
	SecondDishes();
	void SetSecondDishes();
	//~SecondDishes();
};

class Menu : public Drinks, public FirstDishes, public SecondDishes
{
public:
	Menu();
	void SetMenu();
	void PrintMenu();
	int MakeAnOrder();
	void ReceiveAnOrder(int, int, int);
	//~Menu();

};

class Vacancy
{
	string NameOfVacancy, Demand;
public:
	Vacancy();
	Vacancy(string , string );
	void SetVacancy(string , string );
	//~Vacancy();
};

class Stocks
{
	string Data, Stock;
public:
	Stocks();
	Stocks(string , string );
	void SetStock(string , string );
	//~Stocks();
};

class Information : public Menu, public Table, public Personal, public Stocks, public Vacancy
{
protected:
	string AboutUs;
public:
	Information();
	Information(string);
	void  SetInformation(string);
	//~Information();
};

/*class Tab : private Busket, private Stocks
{
public:
	Tab();
	void SetTab();
	void PrintTab();
	~Tab();
};

/*class Busket : private Table, private Menu
{
	string Day;
public:
	Busket();
	Busket();
	void Choise();
	~Busket();
};*/

class MainClass {
protected:
	string FD, SD, Dr;
	double CFD, CSD, CDr;
public:
	void YourChoise(int);
};


