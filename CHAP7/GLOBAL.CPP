#include <iostream.h>
int x,y;
void swap();
void swap()
{
int c;
c=x;
x=y;
y=c;
}
main()
{
x=5;
y=6;
swap();
cout<<"x="<<x<<"  y="<<y<<'\n';
return 0;
}