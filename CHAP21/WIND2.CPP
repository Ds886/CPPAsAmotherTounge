#include <conio.h>
#include <string.h>
#include "wind2.h"
 void wind2::PrintStatus()
     {
     window(1,25,80,25);
     textbackground(WHITE);
     clrscr();
     window(1,1,80,25);
     textcolor(BLACK);
     gotoxy(2,25);
     cputs(status);
     window(left+1,top+1,right-1,bottom-1);
     }
 
   void wind2::function(int i)
      {
      window(left+1,top+1,right-1,bottom-1);
      textcolor(FrameColor);
      textbackground(BackColor);
      gotoxy(1,1);
      switch(i){
   case 0: return;
   case 1: cprintf("Pressed first menu"); break;
   case 2: cprintf("Pressed second menu"); break;
   case 3: cprintf("Pressed third menu"); break;
   case 4: cprintf("Pressed forth menu"); break;
   case 5: cprintf("Pressed fifth menu"); break;
   case 6: cprintf("Pressed sixth menu"); break;
   case 7: cprintf("Pressed seventh menu"); break;
   case 8: cprintf("Pressed eigth menu"); break;
     }
   }
	
    




 
 void wind2::GotoManue()
   {};
