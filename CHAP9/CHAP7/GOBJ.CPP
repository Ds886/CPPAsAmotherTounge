#include <iostream.h>
void f1();

struct point{
  int a,b;
  point(int x,int y){a=x;b=y;}
  void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
  }p1(7,10),p2(20,30);

int x=5,y;
point p3(2,5);

main()
{
point p4(10,20);
p1.show();
p2.show();
p3.show();
p4.show();
x=p1.a;y=p1.b;
f1();
return 0;
}

void f1()
{
cout<<"x="<<x<<"  y="<<y<<'\n';
}