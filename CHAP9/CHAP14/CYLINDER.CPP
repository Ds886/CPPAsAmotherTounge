#include <iostream.h>
#include "cube.h"
class cylinder : public cube{
  public:
  cylinder(int Ia,int Ih):cube(Ia,Ih){};
  area(){return(3.14*a*a);}
  };
main()
{
cylinder  c(7,9);
cout<<"the valume of c="<<c.volume()<<'\n';
return 0;
}