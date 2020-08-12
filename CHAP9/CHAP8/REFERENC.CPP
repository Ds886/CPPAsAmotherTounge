#include <iostream.h>
struct point{
  int a,b;
  point(int x,int y){a=x;b=y;}
void  show(){cout<<"a="<<a<<" b="<<b<<'\n';}
  };
void add(point& p1,point& p2);
void add(point& p1,point& p2)  
  {
  p1.a+=p2.a;
  p1.b+=p2.b;
  }
main()
{
point px(7,8),py(9,11);
add(px,py);
px.show();
return 0;
}