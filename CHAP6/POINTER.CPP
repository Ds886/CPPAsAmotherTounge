#include <iostream.h>
main()
{
int x=10,y;
cout<<"x="<<x<<" y="<<y<<" &x="<<&x<<" &y="<<&y<<'\n';
int *p;
cout<<"p="<<p<<'\n';
p=&x;
cout<<"p="<<p<<'\n';
y=*p;
cout<<"y="<<y<<'\n';
return 0;
}