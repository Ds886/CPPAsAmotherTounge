#include <strstream.h>
//for visual c++ include <strstrea.h>
#include <iostream.h>
#include <iomanip.h>
main()
{
char line[256];
ostrstream str(line,sizeof(line));
str<<"Bosh"<<setw(10)<<" Goeorge"<<setw(10)<<2465324;
str<<" A="<<65<<" in hex A="<<hex<<65<<ends;          
cout<<"the number of characters that were input are "<<str.pcount()<<endl;
cout<<"line="<<line<<endl;
return 0;
}