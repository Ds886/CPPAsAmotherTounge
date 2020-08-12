#include <iostream.h>
class base1{
  int a;
  public:
  base1(int x){a=x;}
  void show1(){cout<<"  base1: a="<<a;}
  };
class base2{
  int b;
  public:
  base2(int y){b=y;}
  void show2(){cout<<"  base2:  b="<<b;}
  };
class derived :public base1,public base2{
  int c;
  public:
  derived(int x,int y,int z):base1(x),base2(y)
    {
    c=z;
    }
  void show3()
    {
    cout<<"derived: ";
    show1();
    show2();
    cout<<"  c="<<c;
    }
  };
main()
{
derived d(1,2,3);
d.show1();
cout<<'\n';
d.show2();
cout<<'\n';
d.show3();
cout<<'\n';
return 0;
}
