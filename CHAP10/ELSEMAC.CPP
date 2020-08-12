#include <iostream.h>
#define SIZE 500
main()
{
cout<<"now in main\n";
#if SIZE>700
   cout<<"SIZE is very big\n";
#else
   cout<<"SIZE is small\n";
   cout<<"more statements than one can be input\n";
#endif
return 0;
}