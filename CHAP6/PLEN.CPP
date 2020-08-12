#include <iostream.h>
plen(char *str)
{
int i;
for(i=0;*str++;i++);
   return(i);
}
main()
{
char name[10]="Dani";
cout<<name<<" is "<<plen(name)<<" long\n";
return 0;
}
