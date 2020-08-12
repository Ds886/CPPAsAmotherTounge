#include <iostream.h>
class rect{
  public:
  int a,b;
  void show()
    {
    cout<<"rect: a="<<a<<" b="<<b<<'\n';
    }
  };
main()
{
int i;
int toto[6];
rect r[3];
toto[0]=5;toto[1]=29;toto[2]=25;toto[3]=32;
toto[4]=16;toto[5]=7;
r[0].a=2;r[0].b=15;
r[1].a=8;r[1].b=3;
r[2].a=14;r[2].b=6;
for(i=0;i<6;i++)
  cout<<"toto["<<i<<"]="<<toto[i]<<'\n';
for(i=0;i<3;i++)
  r[i].show();
return 0;
}


