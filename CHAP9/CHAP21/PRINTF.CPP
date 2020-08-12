#include <stdio.h>
#include <conio.h>
main()
{
clrscr();
int x=70,y=81;
float f=2.45;
char ch='A',a=65;
char name[10]="shalom";
unsigned int u;
printf(" x in decimal base x=%d and in hex x=%x\n",x,x);
printf(" x as a character x=%c\n",x );
printf("real number f=%3.3f\n",f);
printf("the rest of the variables ch=%d ch=%c a=%d a=%c name=%s\n",ch,ch,a,a,name);
printf("<%10.3f>\n",f);
printf("<%20.4f>\n",f);
printf("name=<%10s>\n",name);
printf("name=<%20s>\n",name);
return 0;
 }
