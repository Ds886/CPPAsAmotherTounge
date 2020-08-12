#include <iostream.h>
class base{
  public:
  int x;
  };
class base1:virtual public base{
      public:
       int y;
       };
class base2:virtual public base{
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
d.x=3;//O.K.
cout<<"d.x="<<d.x<<'\n';
return 0;
}