#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "Vector.h"

using namespace std;
Vector::Vector() {
	size = NULL;
	arr = NULL;
}

Vector::Vector(int n) {
	size = n;
	arr = new int[n];
}

Vector::~Vector(){
	delete arr;
}

int Vector::AddFile(FILE *file) {
	for (int i = 0; i < size; i++) {
		int scan = fscanf(file, "%d", &arr[i]);
		if (scan == EOF)
			return 1;
	}
	return 0;
}

void Vector::Show() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout<<endl;
}

void Vector::Reverse(){
	int count=0;
	for(int i=0;i<size;i++)
		if(arr[i]<0)
		count++;
	if(count<2)
		cout<<endl<<"Count negativ < 2"<<endl;
	else{
		for(int i=0;i<size;i++)
			if(arr[i]<0)
			{
				int tmp=arr[i];
				int j;
				for(j=i;j<size;j++)
					if(arr[j]<0)
					{
						arr[i]=arr[j];
						arr[j]=tmp;
						i=j;
					}
			}
			cout<<"Arrey before swap:"<<endl;
		for(int i=0;i<size;i++)
			cout<<arr[i]<<" ";
	}
}

void Vector::MinMaxBefore(){
	int minBefore=arr[0], maxBefore=arr[0];
	indexMinBefore=0,indexMaxBefore=0;
	for(int i=1;i<size;i++)
	{
		if(arr[i]<minBefore)
		{
			minBefore=arr[i];
			indexMinBefore=i;
		}
		if(arr[i]>maxBefore)
		{
			maxBefore=arr[i];
			indexMaxBefore=i;
		}
	}
	cout<<endl<<"Minimum: "<<minBefore<<endl<<"Maximum: "<<maxBefore<<endl;
}

void Vector::MinMaxAfter(){
	int minAfter=arr[0], maxAfter=arr[0];
	indexMinBefore=0,indexMaxBefore=0;
	for(int i=1;i<size;i++)
	{
		if(arr[i]<minAfter)
		{
			minAfter=arr[i];
			indexMinAfter=i;
		}
		if(arr[i]>maxAfter)
		{
			maxAfter=arr[i];
			indexMaxAfter=i;
		}
	}
}

void Vector::CompareMinimal(){
	if(indexMinBefore>indexMinAfter)
		cout<<endl<<"Minimal element changed to left!"<<endl;
	else if(indexMinBefore<indexMinAfter)
		cout<<"Minimal element changed to right!"<<endl;
	else
		cout<<"Minimal element wasn't changed!"<<endl;
}

void Vector::CompareMaximal(){
	if(indexMaxBefore>indexMaxAfter)
		cout<<"Maximal element changed to left!"<<endl;
	if(indexMaxBefore==indexMaxAfter)
		cout<<"Maximal element wasn't changed!"<<endl;
	if(indexMaxBefore<indexMaxAfter)
		cout<<"Maximal element changed to right!"<<endl;
		
}