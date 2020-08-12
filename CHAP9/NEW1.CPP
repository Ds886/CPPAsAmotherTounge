#include <iostream.h>
main()
{
int *p;
p=new int;
*p=10;
cout<<"*p="<<*p<<'\n';
delete p;
return 0;
}