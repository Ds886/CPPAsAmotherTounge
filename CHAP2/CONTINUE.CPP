#include <iostream.h>
main()
{
int i;
for(i=0;i<100;i++)
 {
 if ( (i%2)==0 ) continue;
 cout<<"i="<<i<<'\n';
 }
return 0;
}