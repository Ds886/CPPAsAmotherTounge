#include <iostream.h>
#include "objnew1.h"
main()
{
point p1(5,7),*p_ptr;
p_ptr=new point(10,20); // dynamic allocation
p1.show();
p_ptr->show();
delete p_ptr;
return 0;
}