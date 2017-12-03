#include <string>
using namespace std;
class Table {
	int CountTableAll, CountTableFree, CountTableBooking;
public:
	Table();
	~Table();
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
	~Personal();
};

class Drinks
{
protected:
	char *NameOfDrink;
	int *CountOfDrink;
public:
	Drinks();
	void SetDrinks(char *, int*);
	~Drinks();
};

class FirstDishes
{
protected:
	char *NameOfFirstDish;
	double *CountOfFirstDish;
public:
	FirstDishes();
	FirstDishes(char *, double *);
	void SetFirstDishes(char *, double*);
	~FirstDishes();
};

class SecondDishes
{
protected:
	char *NameOfSecondDish;
	double *CountOfSecondDish;
public:
	SecondDishes();
	SecondDishes(char *, double *);
	void SetSecondDishes(char *, double*);
	~SecondDishes();

};

class Menu : public Drinks, public FirstDishes, public SecondDishes
{
public:
	Menu();
	void SetMenu();
	void PrintMenu();
	int MakeAnOrder();
	void ReceiveAnOrder(int, int, int);
	~Menu();

};

class Vacancy
{
	char *NameOfVacancy, *Demand;
public:
	Vacancy();
	Vacancy(char *, char *);
	void SetVacancy(char *, char *);
	~Vacancy();
};

class Stocks
{
	char *Data, *Stock;
public:
	Stocks();
	Stocks(char *, char *);
	void SetStock(char *, char *);
	~Stocks();
};

class Information : public Menu, public Table, public Personal, public Stocks, public Vacancy
{
protected:
	string AboutUs;
public:
	Information();
	Information(string);
	void  SetInformation(string);
	~Information();
};

class Tab : private Menu, private Stocks
{
public:
	Tab();
	void SetTab();
	void PrintTab();
	~Tab();
};

class Busket : private Table, private Tab
{
	string Day;
public:
	Busket();
	Busket();
	~Busket();
};

