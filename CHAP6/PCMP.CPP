#include <iostream.h>
pcmp(char *str1,char *str2)
{
while(*str1 && *str2 && (*str1==*str2))
  {
  str1++;
  str2++;
  }
return(*str1-*str2);
}
main()
{
char x[10]="war",y[10]="peace";
if (pcmp(x,y)<0)
     cout<<x<<'<'<<y<<'\n';
if (pcmp(x,y)>0)
     cout<<x<<'>'<<y<<'\n';
if (pcmp(x,y)==0)
     cout<<x<<"=="<<y<<'\n';
return 0;
}