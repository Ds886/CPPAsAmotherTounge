#include <iostream.h>
int max(int a,int b);
main()
{
int x=5,y=6,z;
z=max(5,7);
cout<<"max(5,7)="<<z<<'\n';
z=max(x,y);
cout<<"max(x,y)="<<z<<'\n';
return 0;
}
int max(int a,int b)
  {
  if (a>b) 
      return(a);
  else
     return(b);
  }