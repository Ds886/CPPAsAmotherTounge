#include <conio.h>
#include "wind1.h"
main()
{
textcolor(WHITE);
textbackground(BLACK);
clrscr();
wind w1(10,5,40,15),w2(20,10,60,20);
w1.Create();
w2.Create();
return 0;
}