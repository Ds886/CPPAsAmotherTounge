#include <iostream.h>
#include <iomanip.h>
#include "rect2.h"
class rect1:public rect{
  public:
  rect1(int Ia,int Ib):rect(Ia,Ib){};
  void show();
  };
void rect1::show()
  {
  int i,j;
  cout<<'\n';
  for(j=0;j<b;j++)
    {
     if(j==0 || j==b-1)
       {
      for(i=0;i<a;i++)
	cout<<'*';
      cout<<'\n';
	}
    else
      {
     if (j==b/2)
       {
       cout<<'*'<<" perim ="<<setw(3)<<perimeter()<<setw(a-11)<<"*\n";
       continue;
       }
     if (j==(b/2+1) )
	 {
	  cout<<'*'<<" area  = "<<setw(3)<<area()<<setw(a-12)<<"*\n";
	  continue;
	 }
     cout<<'*'<<setw(a)<<"*\n";
      }
      }
     }
  main()
   {
   rect r(15,7);
   rect1 r1(15,7);
   r.show();
   r1.show();
   return 0;
   }