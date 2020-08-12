#include <conio.h>
#include "wind.h"
void wind::DrawFrame()
 {
 int i;
 for(i=left+1;i<right;i++)
   {
   gotoxy(i,top);
    putch(205);
   gotoxy(i,bottom);
   putch(205);
   }
 for(i=top+1;i<bottom;i++)
   {
   gotoxy(left,i);
   putch(186);
   gotoxy(right,i);
   putch(186);
   }
 gotoxy(left,top);
 putch(201);
 gotoxy(right,top);
 putch(187);
 gotoxy(left,bottom);
 putch(200);
 gotoxy(right,bottom);
 putch(188);
 };
void wind::Create()
   {
    window(1,1,80,25);
    textcolor(FrameColor);
    textbackground(BackColor);
    DrawFrame();
    window(left+1,top+1,right-1,bottom-1);
    clrscr();
    }


