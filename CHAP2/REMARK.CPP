#include <iostream.h>
main()
{
int a,x,y,z;//a is used to hold the max number
x=5;y=6;z=56;//This line gives the initial values
/*now the program will look
for the max nuber */ 
a=x;
if (y>a) a=y;
if (z>a) a=z;
cout<<"max number="<<a<<'\n';
return 0;
}