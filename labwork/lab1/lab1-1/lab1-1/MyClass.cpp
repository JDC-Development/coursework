#include <iostream>
#include "MyClass.h"

using namespace std;
Cursor::Cursor(){
	CoordinateX=0;
	CoordinateY=0;
	checkOrientation=0;
}

Cursor::~Cursor(){
	cout<<"IT'S DESTRUCT!!!!!"<<endl;
}

Cursor::Cursor(int x, int y, int count,int size){
	setCursor(x,y,count,size);
}

int Cursor::setCursor(int x,int y,int count,int size){
	if(x>0 && y>0)
	{
		CoordinateX=x;
		CoordinateY=y;
	}
	else
	{
		cout<<"You enter incorrect coordinate, seting standart count"<<endl;
		CoordinateX=1;
		CoordinateY=1;
	}
	if(count==1)
	{
		Orientation="HORISONTAL";
	}
	else if(count==2)
		Orientation="VERTICAL";
	else
	{
		cout<<"You enter incorrect orientation, seting standart count"<<endl;
		Orientation="VERTICAL";
	}
	if(size<1 || size>15)
	{
		cout<<"You enter incorrect size, seting standart count"<<endl;
		Size=9;
	}
	else
	{
		Size=size;
	}
	return 0;
}

void Cursor::getCursor(){
	cout<<"Your cursor is: "<<endl<<"Size: "<<Size<<endl<<"Coordinate: "<<endl<<"X="<<CoordinateX<<endl<<"Y= "<<CoordinateY<<endl<<"Orientation: "<<Orientation<<endl<<endl;	
}