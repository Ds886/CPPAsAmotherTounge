#include <iostream.h>
#include <fstream.h>
main(int argc,char *argv[])
  {
  char line[255];
  if (argc != 2)
   {
   cout<<"Command is : showfile <file name>\n";
   return 1;
   }
  ifstream input(argv[1]);
   if (!input)
    {
    cout<<"cannot open file "<<argv[1];
    return 1;
    }
   while (!input.eof())
    {
    input.getline(line,256);
    cout<<line;
    }
   input.close();
   return 0;
   }