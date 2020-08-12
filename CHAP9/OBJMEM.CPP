#include <iostream.h>
class point{
   int a,b;
   public:
   static int n;
   point(int x,int y);
   void show();
   };
point::point(int x,int y)
  {
  a=x;
  b=y;
  }
void point::show()
  {
  cout<<"a="<<a<<"  b="<<b<<'\n';
  }
main()
{
point p1(7,9),p2(10,20);
p1.show();
p2.show();
return 0;
}