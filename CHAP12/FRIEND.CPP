#include <iostream.h>
class point{
 int a,b;
 public:
 point(int Ia,int Ib){a=Ia;b=Ib;}
 friend void show(point p);
 };
void show(point p)
  {
    point p1(5,6);
    cout<<"p :"<<"a="<<p.a<<" b="<<p.b<<'\n';
    cout<<"p1 :"<<"a="<<p1.a<<" b="<<p1.b<<'\n';
  }
main()
 {
    point x(1,2);
    show(x);
  return 0;
  }
