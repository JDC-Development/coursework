#include <stdio.h>
#include <iostream>
#include "MyClass.h"

using namespace std;
int main ()
{
int x=0,y=0,size=0,count=0;
cout<<"Enter data coordinate(x>0, y>0), orientation(1 - horizontal, 2 - vertical), size( >1 and <15)"<<endl;
cin>>x>>y>>size>>count;
Cursor Keyboard(x,y,count,size);
Keyboard.getCursor();
cout<<"Setting element in programm"<<endl;
Cursor SetData(10,10,1,4);
SetData.getCursor();
system("pause");
return 0;
}