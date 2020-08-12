#include <iostream.h>
class pure{
  public:
  virtual void show()=0;
  };
  class  derived : public pure{
    int x;
    public:
    derived(int Ix){x=Ix;}
    void show(){cout<<"x="<<x<<'\n';}
    };
  main()
  {
  //pure p1;
  pure *p;
  derived d(5);
  d.show();
  p=&d;
  p->show();
  return 0;
  }