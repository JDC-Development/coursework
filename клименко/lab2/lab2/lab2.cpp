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

//�����������
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

//����������
void Vector::Destruct(){
	delete X;
}

//������
void Vector::Show(){
	for(int i=0;i<size;i++)
		cout<<X[i]<<endl;
}

//������ ����������
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

//���������� �������� � ��������� �� �����
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
		cout<<"������� "<<min<<endl<<"�������� "<<max<<endl;
		return IndexMin,IndexMax;
}

//���������� �������� � ��������� ����� �����
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
		cout<<"������� ����� "<<minAfter<<endl<<"�������� ����� "<<maxAfter<<endl;
		return IndexMinAfter, IndexMaxAfter;
}

//���������� ���������
void Vector::Comparison(){
	if(IndexMinAfter>IndexMin)
		cout<<"����������� ������� ��������� ������!"<<endl;
	else if(IndexMinAfter<IndexMin)
		cout<<"����������� ������� ��������� ������!"<<endl;
	else
		cout<<"����������� ������� �� ���������!"<<endl;
	if(IndexMaxAfter>IndexMax)
		cout<<"������������ ������� ��������� ������!"<<endl;
	else if(IndexMaxAfter<IndexMax)
		cout<<"������������ ������� ��������� ������!"<<endl;
	else
		cout<<"������������ ������� �� ���������!"<<endl;
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