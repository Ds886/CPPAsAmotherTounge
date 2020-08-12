#include <iostream.h>
main()
{
int x=5;
float y=3.5F;
void *vptr;
vptr=&x;
cout<<"x="<<*(int *)vptr<<'\n';
vptr=&y;
cout<<"y="<<*(float *)vptr<<'\n';
return 0;
}