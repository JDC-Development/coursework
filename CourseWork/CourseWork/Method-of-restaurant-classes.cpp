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

void Drinks::SetDrinks(string NameOfDrink, int *CountOfDrink) {
	NameOfDrink = "Яблочный сок", "Апельсиновый сок", "Виноградный сок", "Кока-кола", "Вино", "Коньяк", "Виски", "Чай", "Кофе";
	CountOfDrink[9] = 15, 15, 20, 20, 40, 100, 150, 10, 15;
}

//КЛИМЕНКО

//Описание методов с классом первых блюд
FirstDishes::FirstDishes() {
	SetFirstDishes(NameOfFirstDish, CountOfFirstDish);
}

void FirstDishes::SetFirstDishes(string NameOfFirstDish, double CountOfFirstDish[]){
	NameOfFirstDish = "Борщ с мясом Борщ постный Томатный суп Суп грибной Харчо Сырный суп Бозбаш Шурпа Суп-пюре тыквеный по-французский Щи серые";
	CountOfFirstDish[10] = 57, 50, 52, 61, 65, 59, 69, 72, 66, 70;
	cout << NameOfFirstDish;
}

//Описание методов  с классов вторых блюд
SecondDishes::SecondDishes() {
	SetSecondDishes();
}

void SecondDishes::SetSecondDishes() {
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
	SetSecondDishes();
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

void Vacancy::SetVacancy(string NameOfVacancy, string Demand) {
	NameOfVacancy = "Официант", "Уборщик";
	Demand = "Требования: возраст 18-30 лет; умение общаться с клиентами,вежливость, аккуратность; опыт работы приветствуется", "Требования:возраст 18-50 лет; чистоплотность, знание норм санитарии, правилработы с химическими средствами. Опыт работы приветствуется.";
}

//Описание методов класса акций
Stocks::Stocks() {
	SetStock(Data, Stock);
}

void Stocks::SetStock(string Data, string Stock) {
	Data = "Понедельник Среда, Пятница, Суббота, Воскресенье, 31.12.2017, 01.01.2018";
	Stock = "Скидка на кофе 12%", "Скидка на первые блюда 5%", "Скидка 10% на алкогольные напитки", "Скидка 15% на алкогольные напитки", "При заказе свыше 400 грн -бутылка вина в подарок", "Праздничная лотерея со скидками!", "Специальные акционные скидки длябольших компаний";
}

//Описание методов класса Информация
Information::Information(){
	SetInformation(AboutUs);
}

void Information::SetInformation(string AboutUs) {
	AboutUs = "Наше кафе 'Радуга' уже 3 года радует наших клиентов своими изысканными блюдами. Сотни прекрасных отзывов и прекрасная репутация делает наше кафе одим из лучших в городе.Заходите - не пожалеете!";
}


/*Описание методов класса Чек
Tab::Tab() {

}
void Tab::SetTab() {

}
void Tab::PrintTab(){

}
//Описание методов класса для предзаказа
Busket::Busket() {

}
void Busket::Choise() {
	
}*/

void MainClass::YourChoise(int switch_on) {
	switch (switch_on)
	{
	case 1:
		cout << "Выберете первое блюдо" << endl;
		int NumOfFirstDish = 0;
		cin >> NumOfFirstDish;
		switch (NumOfFirstDish)
		{
		case 0:
			break;
		case 1:
			FD = "Борщ с мясом";
			CFD = 57;
			break;
		case 2:
			FD = "Борщ постный";
			CFD = 50;
			break;
		case 3:
			FD = "Томатный суп";
			CFD = 52;
			break;
		case 4:
			FD = "Суп грибной";
			CFD = 61;
			break;
		case 5:
			FD = "Харчо";
			CFD = 65;
			break;
		case 6:
			FD = "Сырный суп";
			CFD = 59;
			break;
		case 7:
			FD = "Бозбаш";
			CFD = 69;
			break;
		case 8:
			FD = " Шурпа";
			CFD = 72;
			break;
		case 9:
			FD = "Суп-пюре тыквеный по-французский ";
			CFD = 66;
			break;
		case 10:
			FD = "Щи серы";
			CFD = 70;
			break;
		
		default:
			break;
		}
		break;
	case 2:
		cout << "Выберете второе блюдо" << endl;
		int NumOfSecondDish = 0;
		cin >> NumOfSecondDish;
		switch (NumOfSecondDish)
		{
		case 1:
			SD = "Вареники с картошкой";
			CSD = 35;
			break;
		case 2:
			SD = "Пельмени";
			CSD = 40;
			break;
		case 3:
			SD = "Хинкали";
			CSD = 43;
			break;
		case 4:
			SD = "Сырники по-домашнему";
			CSD = 29;
			break;
		case 5:
			SD = "Картофель фри";
			CSD = 30;
			break;
		case 6:
			SD = "Картофель пюре";
			CSD = 34;
			break;
		case 7:
			SD = "Котлеты по-киевски";
			CSD = 36;
			break;
		case 8:
			SD = "Паста по-итальянски с креветками";
			CSD = 59;
			break;
		case 9:
			SD = "Картофельные шарики с сыром";
			CSD = 38;
			break;
		case 10:
			SD = "Котлеты рубленые";
			CSD = 49;
			break;
		case 11:
			SD = "Рис по-индийски";
			CSD = 39;
			break;
		case 12:
			SD = "Плов";
			CSD = 41;
			break;
		default:
			break;
		}
		case 3:
			cout << "Выберете напиток" << endl;
			int NumOfDrink = 0;
			cin >> NumOfDrink;
			switch (NumOfDrink)
			{
			case 0:
				break;
			case 1:
				Dr = "Яблочный сок";
				CDr =15;
				break;
			case 2:
				Dr = "Апельсиновый сок";
				CDr = 15;
				break;
			case 3:
				Dr = "Виноградный сок";
				CDr = 20;
				break;
			case 4:
				Dr = "Кока-кола";
				CDr = 20;
				break;
			case 5:
				Dr = "Вино";
				CDr = 40;
				break;
			case 6:
				Dr = "Коньяк";
				CDr = 100;
				break;
			case 7:
				Dr = "Виски";
				CDr = 150;
				break;
			case 8:
				Dr = "Чай";
				CDr = 10;
				break;
			case 9:
				Dr = "Кофе";
				CDr = 15;
				break;
			default:
				break;
			}
	default:
		break;
	}
}