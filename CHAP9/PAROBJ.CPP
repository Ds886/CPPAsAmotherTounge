#include <iostream.h>
class point{
  int a,b;
  public:
  point(int x,int y);
  ~point();
  void show();
  };
point::point(int x,int y)
  {
  a=x;b=y;
  cout<<"constructing point\n";
  }
point::~point()
  {
  cout<<"destructing point\n";
  }
void point::show()
   {
   cout<<"a="<<a<<" b="<<b<<'\n';
   }
void f1(point p)
  {
  p.show();
  }
main()
{
point p1(5,7);
f1(p1);
return 0;
}
