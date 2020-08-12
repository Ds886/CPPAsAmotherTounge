#include <iostream.h>
float max(float a,float b)
 {
 if (a>b)
    return(a);
 else
   return(b);
 }
main()
{
float (*f_ptr)(float a,float b);
f_ptr=max;
float f1=2.22F,f2=3.25F,f3;
f3=f_ptr(f1,f2);
cout<<"f3="<<f3<<'\n';
return 0;
}