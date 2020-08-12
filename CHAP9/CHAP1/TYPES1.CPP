#include <iostream.h>
main()
{
int a='A',b=65,c=0x41,d=0101,x;
char ch,y;
cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<'\n';
ch=a;
float f=70.75F;
x=f;
cout<<"a="<<a<<" ch="<<ch<<" f="<<f<<" x="<<x<<'\n';
signed char z;
y=x;
z=y;
cout<<" x="<<x<<" y="<<y<<" z="<<z<<'\n';
return 0;
}
