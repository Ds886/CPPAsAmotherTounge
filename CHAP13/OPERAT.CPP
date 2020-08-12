#include <iostream.h>
 struct point{
   int a,b;
   point(){};
   point(int Ia,int Ib){a=Ia;b=Ib;}
   point operator+(point p);
   void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
   };
 point point::operator+(point p)
    {
    point tmp;
    tmp.a=a+p.a;
    tmp.b=b+p.b;
    return(tmp);
    }
 main()
 {
 point a1(2,4),a2(7,5),a3;
 a3=a1+a2;
 a3.show();
 (a1+a2).show();
 return 0;
 }