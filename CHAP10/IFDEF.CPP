#include <iostream.h>
#define DEBUG 1
main()
{
int x=5,y=6;
#ifdef DEBUG
  cout<<"x="<<x<<'\n';
#endif
cout<<"unconditional statement";
#ifndef DEBUG
   cout<<"y="<<y<<'\n';
#endif
return 0;
}