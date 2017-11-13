#include <stdio.h>
#include <iostream>
using namespace std;

class Matrix{
int *matrix;
int size_i_j;
public:
	Matrix(int);
	~Matrix();
	void SearchNullElements();
	void SearchMin();
	int SearchSummPositiv();
	void GroupToDown();
};

Matrix::Matrix(int size_i_j){
	matrix=new int[size_i_j];
	for(int i=0;i<size_i_j;i++)
		for(int j=0;j<size_i_j;j++)
		{
			cin>>matrix[i];
			matrix=new int[size_i_j];
		}
}

int main(){
	Matrix MyMatrix(3);
	system("pause");
}