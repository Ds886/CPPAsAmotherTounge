#include <iostream.h>
main()
{
int x=5,y=0,z=8,a=0,b;
b= y && !x || z && !a;
cout<< "b="<<b<<'\n';
return 0;
}