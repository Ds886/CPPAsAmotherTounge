#include <iostream.h>
#include <fstream.h>
main()
{
char ch;
fstream f1("seek.dat",ios::in | ios::out);
 if (!f1)
  {
  cout<<"can't open the file seek.dat";
  return 1;
  }
f1.write("abcdefghijklmnopqrstuvwxyz",27);
cout<<endl;
f1.seekg(5,ios::beg);
f1.get(ch);
cout<<"the fifith character is "<<ch<<endl;
f1.get(ch);
cout<<"the sixth character is "<<ch<<endl;
f1.seekp(10,ios::beg);
f1.put('*');
f1.put('*');
f1.seekg(0,ios::beg);
while(!f1.eof())
{
f1.get(ch);
 cout<<ch;
 }
return 0;
}


