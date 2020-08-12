#include <iostream.h>
enum day {sunday,monday,tuesday,wednesday,thuersday,friday,saturday}d1,d2;
main()
{
day d=sunday,d1,d2;
int x;
d1=monday;
d2=friday;
if (d2>d1)
  cout<<"The day is too late"<<" d1="<<(int)d1<<" d2="<<(int)d2<<'\n';
else
  cout<<"The day is OK\n"<<"d1="<<(int)d1<<" d2="<<(int)d2<<'\n';
x=d1;
cout<<"x="<<x<<'\n';
return 0;
}

