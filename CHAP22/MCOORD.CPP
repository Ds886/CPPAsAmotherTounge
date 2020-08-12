#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include "loc.h"
#include "coord.h"
main()
{
initialize();
coord cd1(1000,500);
cd1.SetCsize(0.5);
int i,Ox,Oy;
for(i=0,Ox=320,Oy=220;i<10;i++,Ox+=10,Oy-=10)
  {
   cd1.MoveCoord(10,10);
  getch();
  }
closegraph();
return(0);
}
