#include <conio.h>
#include <string.h>
#include "wind2.h"
main()
{
int func;
window(1,1,80,25);
textbackground(BLACK);
clrscr();
menu m1("first","second","third","forth","fifth","sixth","seventh","eighth");
wind2 w1(10,5,40,15),w2(20,10,60,20),w3(5,21,75,24);
w1.SetManue(&m1);
w1.SetFrameColor(RED);
w1.SetBackColor(GREEN);
w1.SetTitle("Title");
w1.Create();
(w1.m_ptr)->PrintManue();
while (func=(w1.m_ptr)->move()) w1.function(func);
getch();
w2.SetFrameColor(YELLOW);
w2.SetBackColor(RED);
w2.SetTitle("overlopped window");
w2.SetNum(2);
w2.Create();
getch();
w3.SetFrameColor(WHITE);
w3.SetBackColor(BLUE);
w3.SetNum(3);
w3.SetTitle("Third window");
w3.Create();
getch();
return 0;
}

