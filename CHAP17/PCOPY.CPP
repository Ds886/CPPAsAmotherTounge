#include <iostream.h>
#include <fstream.h>
main(int argc,char *argv[])
 {
 char ch;
 if (argc != 3)
   {
   cout<<"command is : pcopy <source> <target> \n";
   return 1;
   }
 ifstream source(argv[1]);
  ofstream target(argv[2]);
 if (!source)
   {
   cout<<"cannot open file "<<argv[1];
   return 1;
   }
if (!target)
  {
  cout<<"cannot open file"<<argv[2];
  return 1;
  }
while (source)
  {
  source.get(ch);
  target.put(ch);
  }
  return 0;
}