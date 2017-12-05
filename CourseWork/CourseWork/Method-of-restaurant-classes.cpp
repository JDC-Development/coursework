#include <string>
#include <iostream>
#include "restaurant-classes.h"
using namespace std;

//���������

//�������� ������� ������ �� ���������
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

//�������� ������� ������ � ����������
Personal::Personal() {
	SetPersonal(CountAllPersonal, NamePersonal);
}

void Personal::SetPersonal(int CountAllPersonal, string NamePersonal) {
	CountAllPersonal = 13;
	NamePersonal = "����� - ��������, �������� - ��������, �������� - ��������, ����� - ��������, ������ - ������, ������ - ������, ������ - ��������, ����� - �������������, ������ - ���-�����, ����� - �����, �������� - ������, ���������� - ��.�����, ������ - ��������";
}

//�������� ������� ������� � ���������
Drinks::Drinks() {
	SetDrinks(NameOfDrink,CountOfDrink);
}

void Drinks::SetDrinks(string NameOfDrink, int *CountOfDrink) {
	NameOfDrink = "�������� ���", "������������ ���", "����������� ���", "����-����", "����", "������", "�����", "���", "����";
	CountOfDrink[9] = 15, 15, 20, 20, 40, 100, 150, 10, 15;
}

//��������

//�������� ������� � ������� ������ ����
FirstDishes::FirstDishes() {
	SetFirstDishes(NameOfFirstDish, CountOfFirstDish);
}

void FirstDishes::SetFirstDishes(string NameOfFirstDish, double CountOfFirstDish[]){
	NameOfFirstDish = "���� � ����� ���� ������� �������� ��� ��� ������� ����� ������ ��� ������ ����� ���-���� �������� ��-����������� �� �����";
	CountOfFirstDish[10] = 57, 50, 52, 61, 65, 59, 69, 72, 66, 70;
	cout << NameOfFirstDish;
}

//�������� �������  � ������� ������ ����
SecondDishes::SecondDishes() {
	SetSecondDishes();
}

void SecondDishes::SetSecondDishes() {
	NameOfSecondDish = "�������� � ���������", "��������", "�������", "������� ��-���������", "��������� ���", "��������� ����", "������� ��-�������", "����� ��-���������� � ����������", "������������ ������ � �����", "������� ��������", "��� ��-��������", "����";
	CountOfSecondDish[12] = 35, 40, 43, 29, 30, 34, 36, 59, 38, 49, 39, 41;
}

//�������� ������ ����
Menu::Menu() {
	SetMenu();
 }
void Menu::SetMenu() {
	SetDrinks(NameOfDrink, CountOfDrink);
	SetFirstDishes(NameOfFirstDish, CountOfFirstDish);
	SetSecondDishes();
}

void Menu::PrintMenu() {
	cout << "				���� ����" << endl << "������ �����:" << endl;
	for (int i = 0; i < 10; i++)
		cout << NameOfFirstDish[i] << "		" << CountOfFirstDish[i]<<endl;
	cout << "������ �����: " << endl;
	for(int i = 0;i < 12; i++)
		cout << NameOfSecondDish[i] << "	" << CountOfSecondDish[i] << endl;
	cout << "�������: " << endl;
	for (int i = 0; i < 9; i++)
		cout << NameOfDrink[i] << "		" << CountOfDrink[i] << endl;
}

//�������� ������� ������ ��������
Vacancy::Vacancy() {
	SetVacancy(NameOfVacancy, Demand);
}

void Vacancy::SetVacancy(string NameOfVacancy, string Demand) {
	NameOfVacancy = "��������", "�������";
	Demand = "����������: ������� 18-30 ���; ������ �������� � ���������,����������, ������������; ���� ������ ��������������", "����������:������� 18-50 ���; ��������������, ������ ���� ���������, ������������ � ����������� ����������. ���� ������ ��������������.";
}

//�������� ������� ������ �����
Stocks::Stocks() {
	SetStock(Data, Stock);
}

void Stocks::SetStock(string Data, string Stock) {
	Data = "����������� �����, �������, �������, �����������, 31.12.2017, 01.01.2018";
	Stock = "������ �� ���� 12%", "������ �� ������ ����� 5%", "������ 10% �� ����������� �������", "������ 15% �� ����������� �������", "��� ������ ����� 400 ��� -������� ���� � �������", "����������� ������� �� ��������!", "����������� ��������� ������ ���������� ��������";
}

//�������� ������� ������ ����������
Information::Information(){
	SetInformation(AboutUs);
}

void Information::SetInformation(string AboutUs) {
	AboutUs = "���� ���� '������' ��� 3 ���� ������ ����� �������� ������ ����������� �������. ����� ���������� ������� � ���������� ��������� ������ ���� ���� ���� �� ������ � ������.�������� - �� ���������!";
}


/*�������� ������� ������ ���
Tab::Tab() {

}
void Tab::SetTab() {

}
void Tab::PrintTab(){

}
//�������� ������� ������ ��� ����������
Busket::Busket() {

}
void Busket::Choise() {
	
}*/

void MainClass::YourChoise(int switch_on) {
	switch (switch_on)
	{
	case 1:
		cout << "�������� ������ �����" << endl;
		int NumOfFirstDish = 0;
		cin >> NumOfFirstDish;
		switch (NumOfFirstDish)
		{
		case 0:
			break;
		case 1:
			FD = "���� � �����";
			CFD = 57;
			break;
		case 2:
			FD = "���� �������";
			CFD = 50;
			break;
		case 3:
			FD = "�������� ���";
			CFD = 52;
			break;
		case 4:
			FD = "��� �������";
			CFD = 61;
			break;
		case 5:
			FD = "�����";
			CFD = 65;
			break;
		case 6:
			FD = "������ ���";
			CFD = 59;
			break;
		case 7:
			FD = "������";
			CFD = 69;
			break;
		case 8:
			FD = " �����";
			CFD = 72;
			break;
		case 9:
			FD = "���-���� �������� ��-����������� ";
			CFD = 66;
			break;
		case 10:
			FD = "�� ����";
			CFD = 70;
			break;
		
		default:
			break;
		}
		break;
	case 2:
		cout << "�������� ������ �����" << endl;
		int NumOfSecondDish = 0;
		cin >> NumOfSecondDish;
		switch (NumOfSecondDish)
		{
		case 1:
			SD = "�������� � ���������";
			CSD = 35;
			break;
		case 2:
			SD = "��������";
			CSD = 40;
			break;
		case 3:
			SD = "�������";
			CSD = 43;
			break;
		case 4:
			SD = "������� ��-���������";
			CSD = 29;
			break;
		case 5:
			SD = "��������� ���";
			CSD = 30;
			break;
		case 6:
			SD = "��������� ����";
			CSD = 34;
			break;
		case 7:
			SD = "������� ��-�������";
			CSD = 36;
			break;
		case 8:
			SD = "����� ��-���������� � ����������";
			CSD = 59;
			break;
		case 9:
			SD = "������������ ������ � �����";
			CSD = 38;
			break;
		case 10:
			SD = "������� ��������";
			CSD = 49;
			break;
		case 11:
			SD = "��� ��-��������";
			CSD = 39;
			break;
		case 12:
			SD = "����";
			CSD = 41;
			break;
		default:
			break;
		}
		case 3:
			cout << "�������� �������" << endl;
			int NumOfDrink = 0;
			cin >> NumOfDrink;
			switch (NumOfDrink)
			{
			case 0:
				break;
			case 1:
				Dr = "�������� ���";
				CDr =15;
				break;
			case 2:
				Dr = "������������ ���";
				CDr = 15;
				break;
			case 3:
				Dr = "����������� ���";
				CDr = 20;
				break;
			case 4:
				Dr = "����-����";
				CDr = 20;
				break;
			case 5:
				Dr = "����";
				CDr = 40;
				break;
			case 6:
				Dr = "������";
				CDr = 100;
				break;
			case 7:
				Dr = "�����";
				CDr = 150;
				break;
			case 8:
				Dr = "���";
				CDr = 10;
				break;
			case 9:
				Dr = "����";
				CDr = 15;
				break;
			default:
				break;
			}
	default:
		break;
	}
}