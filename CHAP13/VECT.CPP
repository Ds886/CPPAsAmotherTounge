#include <iostream.h>
#include <process.h>
#include "vect.h"
vector::vector(int x)
  {
  if (p=new int[x])
     size=x;
  else
    size=0;
  }
vector::~vector()
{
delete[size]p;
}
int &vector::operator[](int i)
   {
   if (0<=i && i<size)
       return(p[i]);
   else
    {
    cout<<"overflow in vector\n";
    exit(1);
	return p[0];
    }
   }
main()
{
vector v(7);
v[3]=2;
cout<<"v[3]="<<v[3]<<'\n';
v[2]=v[3]+4;
cout<<"v[2]="<<v[2]<<'\n';
v[9]=1;//will generate an overflow warninig
return 0;
}
