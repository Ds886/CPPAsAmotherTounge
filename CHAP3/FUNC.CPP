#include <iostream.h>
void spaces(int x),triangle(int x);
void asterisks(int x);
CheckOdd(int x);
void spaces(int x)
 {
 int i;
 for(i=0;i<x;i++)
   cout<<' ';
 }
void asterisks(int x)
 {
 int j;
 for(j=0;j<x;j++)
   cout<<'*';
  }
void triangle(int x)
 {
 int i,a;
 for(i=1;i<=x;i+=2)
  {
  a=(x-i)/2;
  spaces(a);
  asterisks(i);
  spaces(a);
  cout<<'\n';
  }
 }
CheckOdd(int x)
{
if (x<0)
 return 0;
if (x%2 != 0)
   return 1;
 else
  return 0;
}
main()
{
int x;
do
{
cout<<"input an odd number\n";
cin>>x;
}
while (!CheckOdd(x)); 
triangle(x);
return 0;
}


