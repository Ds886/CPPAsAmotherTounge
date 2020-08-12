#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include "coord.h"
#include "loc.h"
#include "ob.h"
#include "mouse1.h"



main()
{
initialize();
draw cd1(1000,500,0,0,RED,20);
mouse1 m1;
m1.show();
cd1.SetCsize(0.5);
cd1.show();
double x,y=100;
cd1.DrawCoord();
int k,mx,my;
while(1)
  {
for(x=50;x<350;x+=1)
  {
   cd1.moved(x,y);
     if (kbhit()) return 0;
     m1.GetDifference(mx,my);
     if (m1.IsLPressed()) cd1.SetAct();
	else
	   cd1.ResetAct();
     cd1.MoveCoord(mx,-my);
       delay(10);
  }
  
 for(x=350;x>50;x-=1)
  {
   cd1.moved(x,y);
    if (kbhit() ) return 0;
     m1.GetDifference(mx,my);
     if (m1.IsLPressed()) cd1.SetAct();
	 else
	  cd1.ResetAct();
     cd1.MoveCoord(mx,-my);
      delay(10);
  }
}
closegraph();
return(0);
}
