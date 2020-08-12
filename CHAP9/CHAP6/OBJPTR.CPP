#include <iostream.h>
#include <process.h>
#include "objptr.h"
point::set_ab(int x,int y)
  {
  if (x<50 || x>100 || y<50 || y>70)
   return 0;
  else
   {
   a=x;
   b=y;
   return 1;
   }
}
void point::show()
 {
 cout<<"a="<<a<<" b="<<b<<'\n';
  }
 main()
 {
 point p1(90,60),p2(73,55),*p;
 p=&p1;
 cout<<"outputting p while having the addres of p1\n";
 (*p).show();
 (*p).set_ab(50,50);
 p=&p2;
 (*p).set_ab(70,70);
 cout<<"outputting p1\n";
 p1.show();
 cout<<"outputting p2\n";
 p2.show();
 return 0;
 }

