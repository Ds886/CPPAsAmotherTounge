#include <iostream.h>
#include <iomanip.h>
main()
{ 
int i,j;
for(i=1;i<=10;i++)
  {
  for(j=1;j<=10;j++)
  cout<<setw(5)<<i*j;
  cout<<'\n';
  }
return 0;
}