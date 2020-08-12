#include <string.h>
#include <conio.h>
#include "menu.h"
  void menu::PrintManue()
     {
     int i;
     window(1,1,80,1);
     textbackground(WHITE);
     clrscr();
     window(1,1,80,25);
     textcolor(BLACK);
     for(i=0;i<8;i++)
      {
       gotoxy(i*10+1,1);
       cputs(&menu[i][0]);
       }
       gotoxy(ActiveManue*10,1);
       textbackground(GREEN);
       gotoxy(ActiveManue*10+1,1);
       cputs(&menu[ActiveManue][0]);
     }

 int menu::GetKey()
     {
     int ch;
       ch=getch();
       if (ch==0)
	  ch=getch();
       return(ch);
     }
    menu::move()
    {
    char ch=0;
    while (ch != 27)
      {
      ch=GetKey();
      switch (ch){
      case 75:
	if (ActiveManue==0) 
	    ActiveManue=7;
	else
	 ActiveManue--;
	 PrintManue();
	  break;
      case 77:
	 if (ActiveManue==7) 
	    ActiveManue=0;
	else
	 ActiveManue++;
	  PrintManue();
	  break;
      case 13:
	 return(ActiveManue+1);
      }}
      return(0);
    }