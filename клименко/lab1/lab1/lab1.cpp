#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;


class card{
private:
	char nameBook[1000], nameAuthor[1000];
	int count, dateGivenYear,dateGivenMonth, dateGivenDay, dateReturnDay, dateReturnMonth, dateReturnYear;
public:
	void ElementBook();
	int CountOfBookReturn();
	void PrintBook();
};

void card::ElementBook(){
	cout<<"������� ������: "<<endl;
	cin>>nameAuthor;
	cout<<"������� �������� �����"<<endl;
	cin>>nameBook;
	cout<<"������� ����� �����������"<<endl;
	cin>>count;
	cout<<"������� ���� ������(�����, �����, ���)"<<endl;
	cin>>dateGivenDay>>dateGivenMonth>>dateGivenYear;
	cout<<"������� ���� �����������(�����, �����, ���)"<<endl;
	cin>>dateReturnDay>>dateReturnMonth>>dateReturnYear;
}

void card::PrintBook(){
cout<<"�������� �����: "<<nameBook<<endl;
cout<<"�����: "<<nameAuthor<<endl;
cout<<"���������� �����������: "<<count<<endl;
cout<<"���� ���������: "<<dateGivenDay<<" "<<dateGivenMonth<<" "<<dateGivenYear<<endl;
cout<<"���� �����������: "<<dateReturnDay<<" "<<dateReturnMonth<<" "<<dateReturnYear<<endl;
}

int card::CountOfBookReturn(){
	cout<<"���������� ����: "<<abs(dateReturnDay-dateGivenDay)<<endl;
	cout<<"���������� �������: "<<abs(dateReturnMonth-dateGivenMonth)<<endl;
	cout<<"���������� ���: "<<abs(dateReturnYear-dateGivenYear)<<endl;
	return 0;
}

int main(){
	setlocale(LC_ALL,"russian");
	card MyCard;
	MyCard.ElementBook();
	MyCard.PrintBook();
	MyCard.CountOfBookReturn();
	system("pause");
	return 0;
}