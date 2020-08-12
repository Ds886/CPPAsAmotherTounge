#include <iostream.h>
void inc();
void inc()
  {
  static int i=0;
  i+=10;
  cout<<"  i="<<i;
  }
main()
{
int k;
cout<<'\n';
for(k=0;k<10;k++)
  {
    inc();
  }
return 0;
}