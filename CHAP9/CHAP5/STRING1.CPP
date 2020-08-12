#include <iostream.h>
#include<conio.h>
main()
{
int i=0,j=1;
clrscr();
char str[20]="I LOVE C++";
cout<<str<<"\n\n";
while(str[i]!=0)
  {
  cout.width(j);
  cout<<str[i];
  i++;j++;
  }
cout<<"\n\n press a key";
getch();
return 0;
}