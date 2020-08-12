#include <iostream.h>
main()
{
int i;
char name[10]="ISRAEL",rev[10],*p1,*p2;
p1=&name[0];p2=&rev[0];
while(*p1) p1++;
p1--;
for(i=0;i<6;i++,p1--,p2++)
   (*p2)=(*p1);
(*p2)=0;
cout<<"rev="<<rev<<'\n';
return 0;
}
