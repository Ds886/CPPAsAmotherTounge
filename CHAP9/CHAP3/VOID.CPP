#include <iostream.h>
void square(int x);
void square(int x)
{
int i,j;
for(i=0;i<x;i++)
  cout<<'*';
cout<<'\n';
for(i=1;i<x-1;i++)
  {
  cout<<'*';
  for(j=1;j<x-1;j++)
  cout<<' ';
  cout<<'*';
  cout<<'\n';
  }
  for(i=0;i<x;i++)
   cout<<'*';
  cout<<'\n';
  }
main()
{
int a=5;
square(a);
return 0;
}