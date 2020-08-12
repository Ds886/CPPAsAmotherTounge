#include <iostream.h>
class point{
  int a,b;
  public:
  point(int x,int y){a=x,b=y;}
  point(){a=0;b=0;}
  point(int z){a=b=z;}
  void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
  };
main()
{
point p1(7,3),p2(6),p3;
p1.show();
p2.show();
p3.show();
return 0;
}