#include <strstream.h>
//for visual c++ include <strstrea.h>
#include <iostream.h>
main()
{
char *p;
ostrstream s;
s<<"this is a dynamic string ";
s<<hex<<65<<ends;
p=s.str();
cout<<p;
delete p;
return 0;
}