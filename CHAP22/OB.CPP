#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include "coord.h"
#include "loc.h"
#include "ob.h"

main()
{
initialize();
draw cd1(1000,500,0,0,RED,20);
cd1.SetCsize(0.5);
cd1.show();
double x,y=100,i;
cd1.DrawCoord();
int k;
for(k=0;k<3;k++)
{
for(x=50,i=50;x<350;x+=1)
  {
   cd1.moved(x,y);
   if (x>i)
     {
       if (kbhit())
       {
	cd1.SetAct();
	getch();
	}
	else
	   cd1.ResetAct();
      cd1.MoveCoord(0,1);
      i+=10;
     }
       delay(10);
  }
  
 for(x=350,i=350;x>50;x-=1)
  {
   cd1.moved(x,y);
   if (x<i)
     {
	 if (kbhit())
	  {
	   cd1.SetAct();
	   getch();
	   }
	else
	   cd1.ResetAct();
      cd1.MoveCoord(0,1);
      i-=10;
     }
      delay(10);
  }
}
closegraph();
return(0);
}
