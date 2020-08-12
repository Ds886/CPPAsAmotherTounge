#include <iostream.h>
#include "try.h"
#include <math.h>

float try1::get_r()
  {
  float r;
  r=sqrt(a*a+b*b);
  return(r);
  }
float try1::perimeter()
  {
  float l;
  l=a+b+get_r();
  return(l);
  }
void try1::set_a(float f)
  {
  if (f<0) a=0;
   else
    a=f;
  }
void  try1::set_b(float f)
  {
  if (f<0) b=0;
   else
     b=f;
  }   
float try1::get_a()
   {
   return(a);
   }
float try1::get_b()
  {
  return(b);
  }
main()
{
try1 t1;
t1.set_a(3);
t1.set_b(4);
cout<<"t1: a="<<t1.get_a()<<"  b="<<t1.get_b()<<'\n';
cout<<"perimeter="<<t1.perimeter()<<'\n';
return 0;
}