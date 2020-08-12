#include <stdio.h>
#include <conio.h>
main()
{
clrscr();
int ch=2,i=0;
while (ch != 27 )
   {
   i++;
   if ( i%3==0 ) 
      {
      printf("\n");
      }
   ch=getch();
   if (ch==0)
    {
    ch=getch();
    printf("  %c=[0][%d]",ch,ch);
    }
   else
    printf("  %c=[%d]",ch,ch);
    }
return 0;
}
     
     