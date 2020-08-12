#include <iostream.h>
#include "objptr1.h"
main()
{
point p1(2,17),p2(80,25),*p;
p=&p1;
(*p).a=5;(*p).b=7;
(*p).show();
p=&p2;
(*p).a=10;(*p).b=10;
(*p).show();
return 0;
}
