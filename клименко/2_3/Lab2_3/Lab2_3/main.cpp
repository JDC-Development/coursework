#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "Vector.h"
using namespace std;


int main() {
	int size1=5;
	Vector MyVector(size1);
	FILE *file1 = fopen("vector1.txt", "rt");
	if (file1 == NULL || MyVector.AddFile(file1)) {
		cout << "\nLoad from file 'vector1.txt' error!";
		_getch();
	}
	fclose(file1);
	MyVector.Show();
	MyVector.MinMaxBefore();
	MyVector.Reverse();
	MyVector.MinMaxAfter();
	MyVector.CompareMinimal();
	MyVector.CompareMaximal();
	system("pause");
}