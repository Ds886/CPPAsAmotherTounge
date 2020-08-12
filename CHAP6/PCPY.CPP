#include <iostream.h>
pcpy(char *target,char *source)
 {
 while(*target++ = *source++);
 return 0;
 }
main()
{
char name1[10]="Dani",name2[10];
pcpy(name2,name1);
cout<<"name1="<<name1<<" name2="<<name2<<'\n';
return 0;
}