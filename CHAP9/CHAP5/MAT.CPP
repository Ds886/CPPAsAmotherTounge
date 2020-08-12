#include <iostream.h>
main()
{
int mul[11][11],i,j;
for(i=1;i<=10;i++)
  for(j=1;j<=10;j++)
  mul[i][j]=i*j;
for(i=1;i<=10;i++)
  {
  cout<<'\n';
  for(j=1;j<=10;j++)
  {
  cout.width(5);
  cout<<mul[i][j];
  }
  }
return 0;
}