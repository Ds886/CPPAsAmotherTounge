#include <iostream.h>
main()
{
int *p,*q,i;
p=new int[5];
for(i=0;i<5;i++)
   p[i]=i;
q=p;
p=new int[5];
for(i=0;i<5;i++)
   p[i]=2*i;
for(i=0;i<5;i++)
   cout<<p[i]<<' ';
cout<<'\n';  
delete []p;
for(i=0;i<5;i++)
  cout<<q[i]<<' ';
  cout<<'\n'; 
delete []q;
return 0;
}