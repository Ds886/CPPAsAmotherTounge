#include <iostream.h>
class point{
 int a,b;
 public:
 point(){};
 point(int Ia,int Ib){a=Ia;b=Ib;}
 friend point operator+(point p1,point p2)
   {
   point tmp;
   tmp.a=p1.a+p2.a;
   tmp.b=p1.b+p2.b;
   return tmp;
   }
 friend point operator++(point &p1);
 void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
 };
 point operator++(point &p1)
   {
   p1.a++;
   p1.b++;
   return p1;
   }
 main()
 {
 point p1(2,4),p2(5,6),p3;
 p3=p1+p2;
 p3.show();
 (++p3).show();
 return 0;
 }
