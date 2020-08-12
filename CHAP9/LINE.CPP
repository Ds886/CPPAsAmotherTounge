#include <iostream.h>
#include "line.h"
void f1()
 {
 line l1(7,8,10,20),*l_ptr;
 l_ptr=new line(1,2,3,4);
 l1.show();
 l_ptr->show();
 delete l_ptr;
 }
main()
{
f1();
cout<<"done\n";
return 0;
}