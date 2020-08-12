#include "point.h"
void add(point *p1,point *p2);
main()
{
point p1(5,6),p2(7,9);
add(&p1,&p2);
p1.show();
return 0;
}
