#include <iostream.h>
#include <iomanip.h>
#include <string.h>
  char id[20];
istream &getid(istream &in,int digits)
  {
  cout<<"Enter id number"<<endl;
  while(1)
   {
   in>>id;
   if (strlen(id)==digits)
     return in;
   else
    cout<<"the id number must have "<<digits<<' '<<"digits\n";
    }
   }
  IMANIP (int)getid(int digits){
    return IMANIP(int) (getid,digits);
    }
main()
{
cin>>getid(6);
cout<<"id="<<id<<'\n';
return 0;
}