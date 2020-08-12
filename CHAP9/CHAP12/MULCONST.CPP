#include <iostream.h>
class base1{
  public:
  base1(){cout<<"constructor of base 1\n";}
  ~base1(){cout<<"destructor of base 1\n";}
   };
class base2{
  public:
  base2(){cout<<"constructor of base 2\n";}
  ~base2(){cout<<"destructor of base 2\n";}
  };
class derived : public base1,public base2{
  public:
  derived(){cout<<"constructor of derived\n"; }
  ~derived(){cout<<"destructor of derived\n";}
  };
main()
{
derived d;
return 0;
}
