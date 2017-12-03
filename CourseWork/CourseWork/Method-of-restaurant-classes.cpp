#include <string>
#include <iostream>
#include "restaurant-classes.h"
using namespace std;

//СЕМЕРЕНКО

//Описание методов класса со столиками
Table::Table() {
	SetTable(CountTableAll, CountTableBooking);
}

void Table::SetTable(int CountTableAll, int CountTableBooking) {
	CountTableAll = 100;
	CountTableBooking = 20;
	TableFree(CountTableAll, CountTableBooking);
}

int Table::TableFree(int CountTableAll, int CountTableBooking) {
	CountTableFree = CountTableAll - CountTableBooking;
	return CountTableFree;
}

//Описание методов класса с персоналом
Personal::Personal() {
	SetPersonal(CountAllPersonal, NamePersonal);
}

void Personal::SetPersonal(int CountAllPersonal, string NamePersonal) {
	CountAllPersonal = 13;
	NamePersonal = "Ирина - официант, Светлана - официант, Кристина - официант, Семен - официант, Виктор - бармен, Сергей - бармен, Марина - официант, Алина - администратор, Сергей - шеф-повар, Павел - повар, Владимир - сушист, Константин - ст.повар, Сергей - кондитер";
}

//Описание методов классов с напитками
Drinks::Drinks() {
	SetDrinks(NameOfDrink,CountOfDrink);
}

void Drinks::SetDrinks(char *NameOfDrink, int *CountOfDrink) {
	NameOfDrink = new char[9];
	NameOfDrink = "Яблочный сок", "Апельсиновый сок", "Виноградный сок", "Кока-кола", "Вино", "Коньяк", "Виски", "Чай", "Кофе";
	CountOfDrink[9] = 15, 15, 20, 20, 40, 100, 150, 10, 15;
}

//КЛИМЕНКО

//Описание методов с классом первых блюд
FirstDishes::FirstDishes() {
	SetFirstDishes(NameOfFirstDish, CountOfFirstDish);
}

void FirstDishes::SetFirstDishes(char *NameOfFirstDish, double *CountOfFirstDish){
	NameOfFirstDish = new char[10];
	NameOfFirstDish = "Борщ с мясом", "Борщ постный", "Томатный суп", "Суп грибной", "Харчо", "Сырный суп", "Бозбаш", "Шурпа", "Суп-пюре тыквеный по-французский", "Щи серые";
	CountOfFirstDish[10] = 57, 50, 52, 61, 65, 59, 69, 72, 66, 70;
}

//Описание методов  с классов вторых блюд
SecondDishes::SecondDishes() {
	SetSecondDishes(NameOfSecondDish, CountOfSecondDish);
}

void FirstDishes::SetFirstDishes(char *NameOfSecondDish, double *CountOfSecondDish) {
	NameOfSecondDish = new char[12];
	NameOfSecondDish = "Вареники с картошкой", "Пельмени", "Хинкали", "Сырники по-домашнему", "Картофель фри", "Картофель пюре", "Котлеты по-киевски", "Паста по-итальянски с креветками", "Картофельные шарики с сыром", "Котлеты рубленые", "Рис по-индийски", "Плов";
	CountOfSecondDish[12] = 35, 40, 43, 29, 30, 34, 36, 59, 38, 49, 39, 41;
}

//Описание класса Меню
Menu::Menu() {
	SetMenu();
 }
void Menu::SetMenu() {
	SetDrinks(NameOfDrink, CountOfDrink);
	SetFirstDishes(NameOfFirstDish, CountOfFirstDish);
	SetSecondDishes(NameOfSecondDish, CountOfSecondDish);
}

void Menu::PrintMenu() {
	cout << "				Наше меню" << endl << "Первые блюда:" << endl;
	for (int i = 0; i < 10; i++)
		cout << NameOfFirstDish[i] << "		" << CountOfFirstDish[i]<<endl;
	cout << "Вторые блюда: " << endl;
	for(int i = 0;i < 12; i++)
		cout << NameOfSecondDish[i] << "	" << CountOfSecondDish[i] << endl;
	cout << "Напитки: " << endl;
	for (int i = 0; i < 9; i++)
		cout << NameOfDrink[i] << "		" << CountOfDrink[i] << endl;
}

//Описание методов класса Вакансии
Vacancy::Vacancy() {
	SetVacancy(NameOfVacancy, Demand);
}

void Vacancy::SetVacancy(char *NameOfVacancy, char *Demand) {
	NameOfVacancy = new char[2];
	NameOfVacancy = "Официант", "Уборщик";
	Demand = new char[2];
	Demand = "Требования: возраст 18-30 лет; умение общаться с клиентами,вежливость, аккуратность; опыт работы приветствуется", "Требования:возраст 18-50 лет; чистоплотность, знание норм санитарии, правилработы с химическими средствами. Опыт работы приветствуется.";
}

//Описание методов класса акций
Stocks::Stocks() {
	SetStock(Data, Stock);
}

void Stocks::SetStock(char *Data, char *Stock) {
	Data = new char [7];
	Data = "Понедельник", "Среда", "Пятница", "Суббота", "Воскресенье", "31.12.2017", "01.01.2018";
	Stock= new char[7];
	Stock = "Скидка на кофе 12%", "Скидка на первые блюда 5%", "Скидка 10% на алкогольные напитки", "Скидка 15% на алкогольные напитки", "При заказе свыше 400 грн -бутылка вина в подарок", "Праздничная лотерея со скидками!", "Специальные акционные скидки длябольших компаний";
}

//Описание методов класса Информация
Information::Information(){
	SetInformation(AboutUs);
}

void Information::SetInformation(string AboutUs) {
	AboutUs = "Наше кафе 'Радуга' уже 3 года радует наших клиентов своими изысканными блюдами. Сотни прекрасных отзывов и прекрасная репутация делает наше кафе одим из лучших в городе.Заходите - не пожалеете!";
}

//Семеренко

//Описание методов класса Чек

//Описание методов класса для предзаказа