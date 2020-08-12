#include <iostream.h>
class base1{
  int a;
  public:
  base1(int Ia){a=Ia;}
  void show(){cout<<"a="<<a<<'\n';}
  };
class base2{
  int b;
  public:
  base2(int Ib){b=Ib;}
  void show(){cout<<"b="<<b<<'\n';}
  };
class derived : public base1 ,public base2{
  public:
  derived(int Ia,int Ib): base1(Ia),
			  base2(Ib){};
  };
main()
{
derived d(5,7);
//d.show(); //ambiguous
d.base1::show();
d.base2::show();
return 0;
}
