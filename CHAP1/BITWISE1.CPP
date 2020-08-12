#include <iostream.h>
main()
{
unsigned int a=0x75,b=0x32,c;
c=a^b;
cout<<"c="<<hex<<c<<'\n';
c=~c;
cout<<"c="<<hex<<c<<'\n';
return 0;
}