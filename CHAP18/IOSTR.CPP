#include <iostream.h>
#include <strstream.h>
//for visual c++ include <strstrea.h>
main()
{
char line[256];
strstream str(line,sizeof(line),ios::in |ios::out);
str<<"100 12.5 word\5\7\9";
float f;
int i;
char string[5],ch;
str>>i;
str>>f;
str>>string;
cout<<"i="<<i<<" f="<<f<<" string="<<string<<endl;
return 0;
}
