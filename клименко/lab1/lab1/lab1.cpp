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
	cout<<"Введите автора: "<<endl;
	cin>>nameAuthor;
	cout<<"Введите название книги"<<endl;
	cin>>nameBook;
	cout<<"Введите число экземпляров"<<endl;
	cin>>count;
	cout<<"Введите дату выдачи(число, месяц, год)"<<endl;
	cin>>dateGivenDay>>dateGivenMonth>>dateGivenYear;
	cout<<"Введите дату возвращения(число, месяц, год)"<<endl;
	cin>>dateReturnDay>>dateReturnMonth>>dateReturnYear;
}

void card::PrintBook(){
cout<<"Название книги: "<<nameBook<<endl;
cout<<"Автор: "<<nameAuthor<<endl;
cout<<"Количество экземпляров: "<<count<<endl;
cout<<"Дата получения: "<<dateGivenDay<<" "<<dateGivenMonth<<" "<<dateGivenYear<<endl;
cout<<"Дата возвращения: "<<dateReturnDay<<" "<<dateReturnMonth<<" "<<dateReturnYear<<endl;
}

int card::CountOfBookReturn(){
	cout<<"Количество дней: "<<abs(dateReturnDay-dateGivenDay)<<endl;
	cout<<"Количество месяцев: "<<abs(dateReturnMonth-dateGivenMonth)<<endl;
	cout<<"Количество лет: "<<abs(dateReturnYear-dateGivenYear)<<endl;
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