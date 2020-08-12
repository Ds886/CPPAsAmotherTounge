#include <iostream.h>
struct point{
   int a,b;
   void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
   };
typedef point *place;
main()
{
place p1;
p1=new point;
p1->a=5;p1->b=7;
p1->show();
return 0;
}

