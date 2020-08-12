#include <iostream.h>
void swap(int& a,int& b);
void swap(int& a,int& b)
  {
  int c;
  c=a;
  a=b;
  b=c;
  }
main()
{
int x=5,y=6;
swap(x,y);
cout<<"x="<<x<<"  y="<<y<<'\n';
return 0;
}