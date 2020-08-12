#include <graphics.h>
#include <conio.h>
#include "loc.h"
main()
{
 point p1(200,200,WHITE);
 circ c1(200,200,RED,100);
 initialize();
 p1.show();
 c1.show();
 getch();
 p1.move(250,250);
 c1.move(250,250);
 getch();
 p1.move(400,150);
  getch();
 c1.move(400,150);
 closegraph();
 return(0);
} 
