#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
#include <string.h>
struct product{
  char name[20];
  char supplier[20];
  float price;
  int quantity;
  };
main()
{
streampos pos;
product p1={"bread","Tnuva",12.26F,25},p2={"milk","Tara",17.25F,82},p3;
ofstream f1("products.dat");
 if (!f1)
  {
  cout<<"cannot open file products.dat\n";
  return 0;
  }
 f1.write((unsigned char *)&p1,sizeof(product));
 pos=f1.tellp();
 f1.write((unsigned char *)&p2,sizeof(product));
 f1.close();
 ifstream f2("products.dat");
  if (!f2)
   {
   cout<<"cannot open products.dat for reading\n";
   return 1;
   }
 f2.seekg(pos,ios::beg);
 f2.read((unsigned char *)&p3,sizeof(product));
 cout<<p3.name<<setw(10)<<p3.supplier<<setw(10)<<p3.price
     <<setw(10)<<p3.quantity<<endl;
 return 0;
 }

