#include <dos.h>
#include <iostream.h>
#include <conio.h>
#include "mouse.h"

main()
{
int x,y;
unsigned int i;
mouse m1;
m1.show();
while(!kbhit())
{
if (m1.IsRPressed()) m1.hide();
if (m1.IsLPressed()) m1.show();
gotoxy(10,25);
m1.Getxy(x,y);
cout<<"x="<<x<<" y="<<y;
}
return(0);
}
