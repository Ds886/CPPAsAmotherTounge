#include <conio.h>
#include <string.h>
#include "menu.h"
main()
{
textbackground(BLUE);
clrscr();
int func;
menu m1("File","Edit","Search","Run","Compile","Debug","Options","Window");
m1.PrintManue();
while (func=m1.move() ) 
  {
  window(1,25,80,25);
  cprintf("Pressed %d menu",func);
  }
return 0;
}

