#include <iostream.h>
#include <except.h>
#include <stdlib.h>
//not works in Visual c++


void MyUnexpected()
 {
cout<<"thrown exception from a type that is not in the list"<<endl;
exit(0);
 }
 max(int x,int y) throw(int)
 {
	if (x<0)
	 throw "x can't be negative value";
	if (y<0)
	 throw "y can't be negative value";
	if (x>y) return x;
	 else return y;
 }
void main()
 {
 set_unexpected(MyUnexpected);
  int z;
  try
	{
	 z=max(5,7);
	 z=max(-4,3);
	}
  catch(char *msg)
	{
	cout<<msg<<endl;
	}
  }



