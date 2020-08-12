#include <iostream.h>
#include <string.h>
#include <process.h>
main()
{
int l;
char str1[25],str2[20],str3[15];
l=strlen("happy new year");
if (l<25)
   strcpy(str1,"happy new year");
else
  {
  cout<<"string can't fit into str1";
  exit(1);
  }
if (l<20)
   strcpy(str2,"happy new year");
else
  {
  cout<<"string can't fit into str2";
  exit(1);
  }
if (l<15)
   strcpy(str3,"happy new year");
else
  {
  cout<<"string can't fit into str3";
  exit(1);
  }
cout<<"the length of "<<str1<<'='<<l<<'\n';
return 0;
}