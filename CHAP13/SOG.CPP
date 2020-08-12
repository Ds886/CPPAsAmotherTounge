#include <iostream.h>
  class point{
    float a,b;
    public:
    point(float Ia,float Ib){a=Ia;b=Ib;}
    float operator()(float f1,float f2)
     {
     a+=f1;
     b+=f2;
     return(a*b);
     }
    };
  main()
  {
  point p1(5.1F,7.2F);
  float f;
  f=p1(1.9F,2.8F);
  cout<<"f="<<f<<'\n';
  return 0;
  }
