#include <iostream.h>
#include <iomanip.h>
   ostream &stars(ostream &out,int num)
     {
     int i;
     for(i=0;i<num;i++)
      cout<<'*';
     return out;
     }
   OMANIP (int)stars(int num)
      {
      return OMANIP (int)(stars,num);
      }
main()
{
cout<<"outputting 5 stars "  <<stars(5)<<endl;
cout<<"outputting 10 stars "<<stars(10)<<endl;
return 0;
}