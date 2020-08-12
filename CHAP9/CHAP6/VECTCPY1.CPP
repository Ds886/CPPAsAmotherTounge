#include <iostream.h>
main()
{
int x[5]={7,2,25,39,28},y[5],*p1,*p2,i;
p1=x;p2=y;
for(i=0;i<5;i++,p1++,p2++)
  *p2=*p1;
for(i=0;i<5;i++)
   cout<<"y=["<<i<<']'<<'='<<y[i]<<' ';
   return 0;
}