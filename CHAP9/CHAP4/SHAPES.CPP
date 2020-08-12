#include <iostream.h>
#include "triangle.h"
#include <math.h>
#include "rect.h"
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
int triangle::area()
   {
   int c;
   c=l*l/2;
   return(c);
   }
int triangle::perimeter()
   {
   int r,d;
   r=sqrt(2*l*l);
   d=2*l+r;
   return(d);
   }
void triangle::show()
    {
    int i,j;
    for(i=1;i<=l;i++)
	{
	cout<<'\n';
	for(j=1;j<=i;j++)
	 cout<<'*';
	}
    }
main()
{
rect r1;
triangle t1;
r1.a=5;r1.b=6;
t1.l=5;
cout<<"r1: a="<<r1.a<<" b="<<r1.b<<'\n';
cout<<"r1 area="<<r1.area()<<'\n';
cout<<"r1 perimeter="<<r1.perimeter()<<'\n';
r1.show();
cout<<"t1: l="<<t1.l<<'\n';
cout<<"t1 area="<<t1.area()<<'\n';
cout<<"t1 perimeter="<<t1.perimeter()<<'\n';
t1.show();
return 0;
}



