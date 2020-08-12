#include <iostream.h>
int *find(int n,int *vect,int size)
   {
   int i;
   for(i=0;(i<size) && (n!=*(vect + i)) ;i++);
     if (n == *(vect+i) )
       return(vect + i);
     else
      return 0;
   }
main()
{
int x[10]={7,2,17,15,32,24,12,17,-50,6},*y,i;
y=find(24,x,10);
*y=0;
for(i=0;i<10;i++)
   cout<<"x["<<i<<"]="<<x[i]<<' ';
return 0;
}