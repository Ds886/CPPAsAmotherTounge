#include <iostream.h>
#include <string.h>
main()
{
char name1[10]="moshe",name2[20];
strcpy(name2,name1);
cout<<"name1="<<name1<<"  name2="<<name2<<'\n';
strcpy(name2,"shalom");
cout<<"name2="<<name2<<'\n';
return 0;
}