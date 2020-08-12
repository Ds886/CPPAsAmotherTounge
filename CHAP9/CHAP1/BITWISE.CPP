#include <iostream.h>
main()
{
int a=0x75,maska=0xEf,b=0x60,maskb=0x03;
cout<<"a="<<hex<<a<<'\n';
a = a & maska;
cout<<"a="<<hex<<a<<'\n';
cout<<"b="<< hex<<b<<'\n';
b= b | maskb;
cout<<"b="<<hex<<b<<'\n';
return 0;
}