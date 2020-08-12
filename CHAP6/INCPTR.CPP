#include <iostream.h>
main()
{
int x[5]={2,17,25,8,15},*p,y;
p=x;
cout<<"p="<<p<<"  *p="<<*p<<'\n';
y=*p++;
cout<<"y="<<y<<"  p="<<p<<"  *p="<<*p<<'\n';
y=(*p)++;
cout<<"y="<<y<<"  p="<<p<<"  *p="<<*p<<'\n';
return 0;
}

