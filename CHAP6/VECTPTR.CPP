#include <iostream.h>
main()
{
int i;
float x=12.5F,y=24.4F,z=-12.1F,a=17.27F;
float *f[4];
f[0]=&x; f[1]=&y; f[2]=&z; f[3]=&a;
for(i=0;i<4;i++)
   cout<<"f["<<i<<"]="<<*f[i]<<' ';
return 0;
}