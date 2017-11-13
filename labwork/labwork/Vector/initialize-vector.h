#include <stdio.h>
#include <iostream>

using namespace std;


class Vector{
double *X;
int size;
public:
	double MiddleCurrent1, MiddleCurrent2;
	Vector();
	void MiddleStart();
	void MiddleFinal();
	void NegativElements();
	void ShowVectorX();
	void ShowVectorY();
	void Compare();
};