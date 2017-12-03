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

void Drinks::SetDrinks(char *NameOfDrink, int *CountOfDrink) {
	NameOfDrink = new char[9];
	NameOfDrink = "�������� ���", "������������ ���", "����������� ���", "����-����", "����", "������", "�����", "���", "����";
	CountOfDrink[9] = 15, 15, 20, 20, 40, 100, 150, 10, 15;
}

//��������

//�������� ������� � ������� ������ ����
FirstDishes::FirstDishes() {
	SetFirstDishes(NameOfFirstDish, CountOfFirstDish);
}

void FirstDishes::SetFirstDishes(char *NameOfFirstDish, double *CountOfFirstDish){
	NameOfFirstDish = new char[10];
	NameOfFirstDish = "���� � �����", "���� �������", "�������� ���", "��� �������", "�����", "������ ���", "������", "�����", "���-���� �������� ��-�����������", "�� �����";
	CountOfFirstDish[10] = 57, 50, 52, 61, 65, 59, 69, 72, 66, 70;
}

//�������� �������  � ������� ������ ����
SecondDishes::SecondDishes() {
	SetSecondDishes(NameOfSecondDish, CountOfSecondDish);
}

void FirstDishes::SetFirstDishes(char *NameOfSecondDish, double *CountOfSecondDish) {
	NameOfSecondDish = new char[12];
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
	SetSecondDishes(NameOfSecondDish, CountOfSecondDish);
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

void Vacancy::SetVacancy(char *NameOfVacancy, char *Demand) {
	NameOfVacancy = new char[2];
	NameOfVacancy = "��������", "�������";
	Demand = new char[2];
	Demand = "����������: ������� 18-30 ���; ������ �������� � ���������,����������, ������������; ���� ������ ��������������", "����������:������� 18-50 ���; ��������������, ������ ���� ���������, ������������ � ����������� ����������. ���� ������ ��������������.";
}

//�������� ������� ������ �����
Stocks::Stocks() {
	SetStock(Data, Stock);
}

void Stocks::SetStock(char *Data, char *Stock) {
	Data = new char [7];
	Data = "�����������", "�����", "�������", "�������", "�����������", "31.12.2017", "01.01.2018";
	Stock= new char[7];
	Stock = "������ �� ���� 12%", "������ �� ������ ����� 5%", "������ 10% �� ����������� �������", "������ 15% �� ����������� �������", "��� ������ ����� 400 ��� -������� ���� � �������", "����������� ������� �� ��������!", "����������� ��������� ������ ���������� ��������";
}

//�������� ������� ������ ����������
Information::Information(){
	SetInformation(AboutUs);
}

void Information::SetInformation(string AboutUs) {
	AboutUs = "���� ���� '������' ��� 3 ���� ������ ����� �������� ������ ����������� �������. ����� ���������� ������� � ���������� ��������� ������ ���� ���� ���� �� ������ � ������.�������� - �� ���������!";
}

//���������

//�������� ������� ������ ���

//�������� ������� ������ ��� ����������