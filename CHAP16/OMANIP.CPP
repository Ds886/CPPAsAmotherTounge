#include <iostream.h>
#include <iomanip.h>
ostream &setlcol(ostream &out)
  {
  out.width(10);
  out.setf(ios::left);
  return out;
  }
main()
{
cout<<setlcol<<"first"<<setlcol<<"second"<<endl;
return 0;
}