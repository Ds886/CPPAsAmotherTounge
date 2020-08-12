#include <iostream.h>
struct ob{
 int a,b;
 float f;
 ob(int Ia,int Ib,float If){a=Ia;b=Ib;f=If;}
 void show(){cout<<"a="<<a<<"  b="<<b<<'\n';}
 };
 main()
 {
 float ob::*var;
 void (ob::*func)();
 ob o1(5,7,2.3F),o2(2,3,4.7F),*p1,*p2;
 var=&ob::f;
 func=&ob::show;
 cout<<"o1.f="<<o1.*var<<" o2.f="<<o2.*var<<'\n';
 p1=&o1;
 p2=&o2;
 cout<<"o1->f="<<p1->f<<'='<<p1->*var<<"  o2->f="<<p2->f<<'='<<p2->*var<<'\n';
 (p1->*func)();
 (p2->*func)();
 return 0;
 }
