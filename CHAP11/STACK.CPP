#include <iostream.h>
mul(int a,int b)
  {
  int c;
  c=a*b;
  return(c);
  }
void  show_mul(int s,int t)
       {
       int u;
       u=mul(s,t);
       cout<<"u="<<u<<'\n';
       }
main()
{
int x=5,y=7;
show_mul(x,y);
return 0;
}