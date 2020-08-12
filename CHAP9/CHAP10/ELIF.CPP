#include <iostream.h>
#define AM 1
#define PM 2
#define TIME AM
main()
{
#if TIME==AM
    int t=5;
#elif
   int t=17;
#endif
cout<<"t="<<t<<'\n';
return 0;
}