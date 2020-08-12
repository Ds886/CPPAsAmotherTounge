#include <iostream.h>
class base{
  int x;
  public:
  int y;
  base(int a,int b){x=a;y=b;}
  };
class derived : private base{
  int z;
  public:
  base::y;
//  base::x;
  derived(int a,int b,int c):base(a,b){z=c;}
  void  show(){cout<<"y="<<y<<" z="<<z<<'\n';}
  };
main()
{
derived d(1,2,3);
d.show();
cout<<"main y="<<d.y<<'\n';
return 0;
}
