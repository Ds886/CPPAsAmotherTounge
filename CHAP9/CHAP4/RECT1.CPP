#include <iostream.h>
#include <process.h>
#include "rect1.h"
int rect::area()
 {
 int c;
 c=a*b;
 return (c);
 }
int rect::perimeter()
  {
  int d;
  d=(a+b) * 2;
  return (d);
  }
void rect::show()
  {
  int i,j;
  for(i=0;i<a;i++)
    {
    cout<<'\n';
    for(j=0;j<b;j++)
    cout<<'*';
    }
    cout<<'\n';
  }
main()
{
int z,s;
rect r1(4,20),r2(3,15);
z=r1.perimeter();
s=r1.area();
cout<<"r1: a="<<r1.get_a()<<" b="<<r1.get_b()<<'\n';
cout<<"r1: perimeter="<<z<<'\n';
cout<<"r1: area="<<s<<'\n';
r1.show();
cout<<"r2: a="<<r2.get_a()<<" b="<<r2.get_b()<<'\n';
cout<<"r2: perimeter="<<r2.perimeter()<<'\n';
cout<<"r2: area="<<r2.area()<<'\n';
r2.show();
return 0;
}

