#include <iostream.h>
#include <process.h>
void main(int argc,char *argv[])
  {
  if (argc != 3)
    {
    cout<<"command is program_name arg1 arg2\n";
    exit(1);
    }
  cout<<"argc="<<argc<<'\n';
  cout<<"argv[0]="<<argv[0]<<'\n';
  cout<<"argv[1]="<<argv[1]<<'\n';
  cout<<"argv[2]="<<argv[2]<<'\n';
  }
