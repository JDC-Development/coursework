#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>

using namespace std;

class Cursor{
public:
	int CoordinateX, CoordinateY, Size;
	char Orientation[100];
	Cursor();
	int SetCoordinate();
	void SetOrientation();
	void PrintCursor();
	~Cursor();
};

Cursor::Cursor(){
	IncorrectSize:cout<<"Enter size of cursor(1-15)"<<endl;
	cin>>Size;
	if(Size>15||Size<1)
	{
		cout<<"You enter incorrect count!!!!"<<endl;
		goto IncorrectSize;
	}
}

int Cursor::SetCoordinate(){
	IncorrectCoordinate:cout<<"Enter the X coordinate(>0)"<<endl;
	cin>>CoordinateX;
	cout<<"Enter the Y coordinate(>0)"<<endl;
	cin>>CoordinateY;
	if(CoordinateY<0||CoordinateX<0)
	{
		cout<<"You enter incorrect count!!!!"<<endl;
		goto IncorrectCoordinate;
	}
	return CoordinateX, CoordinateY;
}

void Cursor::SetOrientation(){
	cout<<"Enter the cursor orientation(horizontal or vertical)"<<endl;
	cin>>Orientation;
}

void Cursor::PrintCursor(){
	cout<<"You cursor is:"<<endl;
	cout<<"Coordinate: "<<CoordinateX<<" "<<CoordinateY<<endl;
	cout<<"Orientation: "<<Orientation<<endl;
	cout<<"Size: "<<Size<<endl;
}

Cursor::~Cursor(){
	cout<<"I's a destructor"<<endl;
}

int main(){
	Cursor SetCursore;
	SetCursore.SetCoordinate();
	SetCursore.SetOrientation();
	SetCursore.PrintCursor();
	system("pause");
}