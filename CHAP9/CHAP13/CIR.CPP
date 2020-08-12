#include <iostream.h>
class circ{
  int radius;
  public:
  circ(int Iradius){radius=Iradius;}
     circ(){};
     circ operator++();
     void show(){cout<<"radius="<<radius<<'\n';}
     };
  circ circ::operator++()
      {
      radius++;
      return *this;
      }
  main()
  {
  circ c1(5),c2(7),c3;
  c1++;
  c3=c1;
  c3.show();
  c3=c1++;
  c3.show();
  return 0;
  }