#include <iostream.h>
#define SIZE 500
main()
{
cout<<"now in main\n";
#if SIZE > 700
   cout<<"now in first conditional compilation\n";
#endif
   cout<<"back in unconditional compilation\n";
#if SIZE<600
   cout<<"now in second conditional compilation\n";
#endif
return 0;
}