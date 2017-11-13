#include <stdio.h>
#include <iostream>
#include "initialize-vector.h"

Vector::~Vector(){
	delete [] X;
}

Vector::Vector(){
	errore:cout<<"Enter size of vector"<<endl;
	cin>>size;
	if(size<0)
	{
		cout<<"Incorrect size!!!!!"<<endl;
		goto errore;
	}
	X=new double[size];
	cout<<"Enter vector:"<<endl;
	for(int i=1;i<=size;i++)
		cin>>X[i];
}

void Vector::MiddleStart(){
	MiddleCurrent1=0;
	for(int i=1;i<=size;i++)
		MiddleCurrent1+=X[i];
	MiddleCurrent1/=size;
}

void Vector::MiddleFinal(){
	MiddleCurrent2=0;
	for(int i=1;i<=size;i++)
		MiddleCurrent2+=X[i];
	MiddleCurrent2/=size;
}

void Vector::NegativElements(){
for(int i=1;i<=size;i++)
	if(X[i]<0 && X[i+1]<0)
	{
	   X[i+1]=sqrt(X[i]*X[i+1]);
	   X[i]=X[i+1];
	}
}

void Vector::ShowVectorX(){
	for(int i=1;i<=size;i++)
		cout<<X[i]<<endl;
	cout<<endl;
}

void Vector::Compare(){
	if(MiddleCurrent1>MiddleCurrent2)
		cout<<"The arithmetic mean in the beginning it was more"<<endl;
	if(MiddleCurrent1<MiddleCurrent2)
		cout<<"The arithmetic mean was more"<<endl;
}