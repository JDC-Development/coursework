#include <iostream>
#include <stdlib.h>

using namespace std;

class Matrix{
	int matrix[100][100], index_i, index_j, null_i, null_j, min, max, min_i, min_j, max_i, max_j, module_max, module_max_i, module_max_j, count, tmp;
public:
	Matrix(int m_index_i, int m_index_j){
		index_i=m_index_i;
		index_j=m_index_j;
		cout<<"Enter count of Matrix"<<endl;
		for(int i=0;i<index_i;i++)
			for(int j=0;j<index_j;j++)
				cin>>matrix[i][j];
	}
	~Matrix(){
	cout<<"IT IS DESTRUCTOR!!!";
	}
	void NullElement(){
		cout<<"Enter stroke: ";
		cin>>null_i;
		cout<<"Enter colomn: ";
		cin>>null_j;
		for(int i=0;i<index_i;i++)
		{
			for(int j=0;j<index_j;j++)
			{
				if(i==null_i||j==null_j)
					matrix[i][j]=0;
			}
		}

	}
	void MinPositiveMaxNegativ(){
		for(int i=0;i<index_i;i++)
		{
			for(int j=0;j<index_j;j++)
				if(matrix[i][j]>0)
				{
					min=matrix[i][j];
					break;
				}
		}
		for(int i=0;i<index_i;i++)
		{
			for(int j=0;j<index_j;j++)
				if(matrix[i][j]<0)
				{
					max=matrix[i][j];
					break;
				}
		}
		for(int i=0;i<index_i;i++)
		{
			for(int j=0;j<index_j;j++)
			{
				if(matrix[i][j]<0&&matrix[i][j]>max)
				{
					max_i=i;
					max_j=j;
				}
				else if(matrix[i][j]>0&&matrix[i][j]<min)
				{
					min_i=i;
					min_j=j;
				}
			}
		}
		for(int i=0;i<index_i;i++)
			for(int j=0;j<index_j;j++)
				if(i==min_i && j==min_j || i==max_i && j==max_j)
				{
					tmp=matrix[min_i][min_j];
					matrix[min_i][min_j]=matrix[max_i][max_j];
					matrix[max_i][max_j]=tmp;
				}
	}
	void SearchModuleMax(){
		module_max=abs(matrix[0][0]);
		module_max_i=0;
		module_max_i=0;
		for(int i=1;i<index_i;i++)
		{
			for(int j=1;j<index_j;j++)
			{
				if(abs(matrix[i][j])>module_max)
				{
					module_max=abs(matrix[i][j]);
					module_max_i=i;
					module_max_j=j;
				}
			}
		}
		module_max=0;
		count=0;
		for(int j=0;j<index_j;j++)
			count+=matrix[module_max_i][j];
		module_max=count/index_j;
		matrix[module_max_i][module_max_i]=module_max;	
	}
	void Show(){
		cout<<endl<<"Your Matrix: "<<endl;
		for(int i=0;i<index_i;i++)
		{
			for(int j=0;j<index_j;j++)
				cout<<matrix[i][j]<<" ";
			cout<<endl;
		}
	}
};

int main(){
	Matrix MyMatrix(3,2);
	MyMatrix.Show();
	MyMatrix.NullElement();
	MyMatrix.Show();
	MyMatrix.MinPositiveMaxNegativ();
	MyMatrix.Show();
	MyMatrix.SearchModuleMax();
	MyMatrix.Show();
	system("pause");
}