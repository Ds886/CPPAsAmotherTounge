#include <iostream.h>
#include "cube.h"
float cube::surface()
 {
 return(x[0]*x[1]*2+x[1]*x[2]*2+x[0]*x[2]*2);
  }
float cube::volume()
   {
   return(x[0]*x[1]*x[2]);
   }
main()
{
cube c1(2.0F,4.0F,5.0F),c2(3.0F,6.0F,7.0F);
cout<<"c1: a="<<c1.get_a()<<" b="<<c1.get_b()<<" c="<<c1.get_c()<<'\n';
cout<<"volume="<<c1.volume()<<'\n';
cout<<"surface="<<c1.surface()<<'\n';
cout<<"c2: a="<<c2.get_a()<<" b="<<c2.get_b()<<" c="<<c2.get_c()<<'\n';
cout<<"volume="<<c2.volume()<<'\n';
cout<<"surface="<<c2.surface()<<'\n';
return 0;
}
