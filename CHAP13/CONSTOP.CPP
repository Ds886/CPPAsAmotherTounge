#include <iostream.h>
class circ{
  int radius;
  public:
  circ(){};
  circ(int Iradius){radius=Iradius;}
  friend circ operator+(circ c,int r);
  friend circ operator+(int r,circ c);
  void show(){cout<<"radius="<<radius<<'\n';}
  };
circ operator+(circ c,int r)
  {
  circ tmp;
  tmp=c.radius+r;
  return(tmp);
  }
circ operator+(int r,circ c)
  {
  circ tmp;
  tmp=c.radius+r;
  return(tmp);
  }
main()
{
circ c1(5),c2(7),c3;
c3=c1+5;
c3.show();
c3=5+c1;
c3.show();
return 0;
}