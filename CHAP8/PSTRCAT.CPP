#include <iostream.h>
char *pstrcat(char *str1,char *str2)
  {
  char *start;
  start= str1;
  while(*start) start++;
  while(*start++ = *str2++);
  return(str1);
  }
main()
{
char name1[30]="Dani and ",name2[10]="Roti",*name3;
name3=pstrcat(name1,name2);
cout<<"name3="<<name3<<'\n';
return 0;
}