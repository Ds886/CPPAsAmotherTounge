#include <iostream.h>
#include "objptr2.h"
 void add(point *p1,point *p2)
   {
   p1->a += p2->a;
   p1->b += p2->b;
   }
main()
{
point p1(7,10),p2(8,20);
add(&p1,&p2);
p1.show();
return 0;
}