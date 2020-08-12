#include <iostream.h>
main()
{
int i,n;
cout<<"input numbers\n";
for(i=0;i<10;i++)
 {
 cin>>n;
 cout<<"n="<<n<<'\n';
 if (n==-1) break;
 }
return 0;
}