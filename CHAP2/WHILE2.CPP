#include <iostream.h>
main()
{
int n=-1;
while ( (n<0) || (n>100) ) 
      {
      cout<<"choose a number in the range 0 - 100\n";
      cin>>n;
      }
cout<<"OK you have chosen\n";
return 0;
}