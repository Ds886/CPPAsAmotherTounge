#include <iostream.h>
#include <iomanip.h>
IOMANIPdeclare(float);
ostream &percent(ostream &out,float num)
  {
   out<<num<<'%';
   return out;
  }
OMANIP (float)percent(float num)
  {
  return OMANIP (float)(percent,num);
  }
main()
{
cout<<percent(12.5F)<<endl;
cout<<"the shirt is in "<<percent(25.0F)<<" cheaper than the pants"<<endl;
return 0;
}
