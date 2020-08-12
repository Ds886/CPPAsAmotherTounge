#include <iostream.h>
#include <iomanip.h>
ostream &line(ostream &out)
   {
   out<<"<--------------------------------------->\n";
   return out;
   }
main()
{
cout<<"this is the first page"<<endl;
cout<<line;
cout<<"this is the second page"<<endl;
return 0;
}