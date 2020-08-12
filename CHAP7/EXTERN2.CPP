#include <iostream.h>
void f1(),show(int i,int j,float f);
float a;
extern int x;
int y;
void f1()
  {
  x=15;
  y=6;
  a=7.3F;
  show(x,y,a);
  }
void show(int j,int k,float f)
  {
  cout<<"x="<<j<<"  y="<<k<<"  a="<<f<<'\n';
  }