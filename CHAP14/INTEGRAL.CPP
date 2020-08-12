#include <iostream.h>
#include "integral.h"

main()
{
integral t(2.0F,4.0F,0.01F);
cout<<"the integral of x^2 from 2 to 4 is "<<t.sum()<<'\n';
return 0;
}
      


