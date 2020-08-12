#include <iostream.h>
main()
{
int x[25],i,max;
for(i=0;i<25;i++)
  {
  cout<<"input number "<<i<<'\n';
  cin>>x[i];
  }
for(i=1,max=x[0];i<25;i++)
   if (x[i]>max) max=x[i];
cout<<"The highest number is "<<max<<'\n';
return 0;
}
