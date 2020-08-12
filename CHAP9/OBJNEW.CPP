#include <iostream.h>
#include "objnew.h"
main()
{
point p1,*p_ptr;
p1.set_ab(5,7);
p1.show();
p_ptr=new point;//dynamic allocation
p_ptr->set_ab(10,20);
p_ptr->show();
delete p_ptr;
return 0;
}