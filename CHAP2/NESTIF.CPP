#include <iostream.h>
main()
{
int a,b,c,d,positive;
cout<<"input a b c d positive\n";
cin>>a>>b>>c>>d>>positive;
  if (positive !=0)
   {
    if (a>0) cout<<" a="<<a;
    if (b>0) cout<<" b="<<b;
    if (c>0) cout<<" c="<<c;
    if (d>0) cout<<" d="<<d;
       else  cout<<" d is negative";
    }
   else
  {
    if (a<0) cout<<" a="<<a;
    if (b<0) cout<<" b="<<b;
    if (c<0) cout<<" c="<<c;
    if (d<0) cout<<" d="<<d;
  }
cout<<'\n';
return 0;
}