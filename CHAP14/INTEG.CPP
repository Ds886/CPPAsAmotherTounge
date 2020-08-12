#include <iostream.h>
#include "integral.h"
class integ:public integral{
  public:
  integ(float Ia,float Ib,float Idx):integral(Ia,Ib,Idx){};
  float func(float x);
  };
 float integ::func(float x)
 {
 float f;
 f=2*x*x*x+4*x*x+3*x+2;
 return f;
 }
main()
{
integ f(2.0F,4.0F,0.01F);
cout<<"the integral of 2*x^3+4*x^2+3*x+2 from 2 to 4 is "<<f.sum()<<'\n';
return 0;
}
  