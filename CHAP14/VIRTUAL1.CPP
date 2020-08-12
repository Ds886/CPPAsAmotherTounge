#include <iostream.h>
class base{
  int x;
  public:
  base(int Ix){x=Ix;}
  get_x(){return(x);}
  virtual void show(){cout<<"base show: x="<<x<<'\n';}
  };
class derived1:public base{
  int y;
  public:
  derived1(int Ix,int Iy):base(Ix){y=Iy;}
  void show(){cout<<"derived1 show: x="<<get_x()<<" y="<<y<<'\n';}
  };
class derived2:public derived1{
  int z;
  public:
  derived2(int Ix,int Iy,int Iz):derived1(Ix,Iy){z=Iz;}
  void show(int z){cout<<"derived2 show: z="<<z<<'\n';}
  };
main()
{
base *b_ptr;
derived1 d1(1,2);
derived2 d2(3,4,5);
b_ptr=&d1;
b_ptr->show();
b_ptr=&d2;
b_ptr->show();
return 0;
} 