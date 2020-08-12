#include <conio.h>
main()
{
int x,y;
clrscr();
gotoxy(5,2);
cprintf("line number one");
getch();
gotoxy(5,3);
cprintf("line number two");
getch();
gotoxy(5,4);
cprintf("line number three");
getch();
gotoxy(5,3);
delline();
getch();
gotoxy(10,25);
cprintf("input x y ");
cscanf("%d %d",&x,&y);
gotoxy(x,y);
cprintf("*");
return 0;
}