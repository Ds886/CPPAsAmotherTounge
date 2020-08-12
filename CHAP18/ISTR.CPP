#include <iostream.h>
#include <strstream.h>
//for visual c++ include <strstrea.h>
main()
{
char product[]="milk tnuva 12.47 85";
char name[80],supplier[80];
float price;
int quantity;
istrstream str(product);
str>>name;
str>>supplier;
str>>price;
str>>quantity;
cout<<"name="<<name<<" supplier="<<supplier<<" price="<<price<<" quantity="<<quantity<<endl;
return 0;
}