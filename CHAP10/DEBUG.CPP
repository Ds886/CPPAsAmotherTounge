#include <iostream.h>
#define DEBUG
main()
{
int x=5;
#if defined DEBUG
  cout<<"x="<<x<<'\n';
#endif
return 0;
}