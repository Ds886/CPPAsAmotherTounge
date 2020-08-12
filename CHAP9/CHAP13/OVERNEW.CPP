#include <iostream.h>
#include <stdio.h>
class point{
  int a,b;
  static int psize;
  public:
  point(int Ia,int Ib){a=Ia;b=Ib;}
  void *operator new(size_t size)
    {
    psize=size;
    cout<<"overloaded new\n";
    return(new char[size]);
    }
  void operator delete(void *p)
    {
    cout<<"overloaded delete\n";
    delete [psize]p;
    }
  void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
  };
int point::psize;
main()
{
int *y;
point *p1=new point(5,7);
y=new int;
*y=5;
p1->show();
delete(p1);
return 0;
}