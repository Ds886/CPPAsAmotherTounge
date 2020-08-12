#include <iostream.h>
#include <iomanip.h>
istream &id(istream &in)
   {
   cout<<"input your id number :\n";
   cout<<"id: ";
   return in;
   }
main()
{
long l;
cin>>id>>l;
cout<<"l="<<l<<endl;
return 0;
}