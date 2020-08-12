#include <iostream.h>
class base{
  public:
  int x;
  };
class base1:public base{
      public:
       int y;
       };
class base2:public base{
     public:
      int z;
      };
class derived : public base1,public base2{
  public:
  int d;
  };
main()
{
derived d;
d.y=5; d.z=6; d.d=2;
//d.x=7;//ambiguous
d.base1::x=3;
d.base2::x=4;
cout<<"d.base1::x="<<d.base1::x<<'\n';
cout<<"d.base2::x="<<d.base2::x<<'\n';
return 0;
}