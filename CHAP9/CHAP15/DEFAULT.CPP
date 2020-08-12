#include <iostream.h>
class point{
  int a,b;
  public:
  point(int Ia=0,int Ib=0){a=Ia;b=Ib;}
  void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
  void set(int Na=10,int Nb=20){a=Na;b=Nb;}
  };
main()
{
point p1(7,8),p2;
p1.show();
p2.show();
p1.set(6,2);
p1.show();
p1.set();
p1.show();
return 0;
}
