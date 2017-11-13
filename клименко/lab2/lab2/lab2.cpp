#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;
int IndexMax, IndexMin, IndexMaxAfter,IndexMinAfter;
class Vector{
	int *X, size;
public:
	Vector(int);
	void Negativ();
	void Show();
	int MinElementMaxElement();
	int MinElementMaxElementAfter();
	void Comparison();
	void Destruct();
};

//Конструктор
Vector::Vector(int d){
	if(d<=0)
		cout<<"Errore!!!!!"<<endl;
	else
	{
		size=d;
		X=new int[size];
		cout<<"Enter elements"<<endl;
		for(int i=0;i<size;i++)
			cin>>X[i];
	}
};

//Деструктор
void Vector::Destruct(){
	delete X;
}

//Печать
void Vector::Show(){
	for(int i=0;i<size;i++)
		cout<<X[i]<<endl;
}

//Меняем негативные
void Vector::Negativ(){
	int count=0;
	for(int i=0;i<size;i++)
		if(X[i]<0)
			count++;
	if(count>2)
	{
		for(int i=0;i<size;i++)
			if(X[i]<0)
				for(int j=i;j<size;j++)
					if(X[j]<0)
					{
						int tmp;
						tmp=X[i];
						X[i]=X[j];
						X[j]=tmp;
					}
	}
}

//Нахождение минимума и максимума до смены
int Vector::MinElementMaxElement(){
	int max=X[0], min=X[0], IndexMax,IndexMin;
	for(int i=0;i<size;i++)
		if(X[i]>max)
		{
			max=X[i];
			IndexMax=i;
		}
		else if(X[i]<min){
			min=X[i];
			IndexMin=i;
		}
		cout<<"Минимум "<<min<<endl<<"Максимум "<<max<<endl;
		return IndexMin,IndexMax;
}

//Нахождение минимума и максимума после смены
int Vector::MinElementMaxElementAfter(){
	int maxAfter=X[0], minAfter=X[0], IndexMaxAfter,IndexMinAfter;
	for(int i=0;i<size;i++)
		if(X[i]>maxAfter)
		{
			maxAfter=X[i];
			IndexMaxAfter=i;
		}
		else if(X[i]<minAfter){
			minAfter=X[i];
			IndexMinAfter=i;
		}
		cout<<"Минимум после "<<minAfter<<endl<<"Максимум после "<<maxAfter<<endl;
		return IndexMinAfter, IndexMaxAfter;
}

//Сравниваем положение
void Vector::Comparison(){
	if(IndexMinAfter>IndexMin)
		cout<<"Минимальный элемент сдвинулся вперед!"<<endl;
	else if(IndexMinAfter<IndexMin)
		cout<<"Минимальный элемент сдвинулся вперед!"<<endl;
	else
		cout<<"Минимальный элемент не сдвинулся!"<<endl;
	if(IndexMaxAfter>IndexMax)
		cout<<"Максимальный элемент сдвинулся вперед!"<<endl;
	else if(IndexMaxAfter<IndexMax)
		cout<<"Максимальный элемент сдвинулся вперед!"<<endl;
	else
		cout<<"Максимальный элемент не сдвинулся!"<<endl;
}

int main(){
	setlocale(LC_ALL,"russian");
	Vector MyVector(5);
	MyVector.Show();
	MyVector.MinElementMaxElement();
	MyVector.Negativ();
	MyVector.MinElementMaxElementAfter();
	MyVector.Comparison();
	MyVector.Destruct();
	system("pause");
}