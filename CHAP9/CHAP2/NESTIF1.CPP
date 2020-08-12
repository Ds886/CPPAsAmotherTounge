#include <iostream.h>
main()
{
int a,b,c,d;
cout<<"input a b c d\n";
cin>>a>>b>>c>>d;
if (a>b)
   if (a>c)
      if (a>d)
	 cout<<a<<" is max\n";
      else
	 cout<<d<<" is max\n";
   else
      if (c>d)
	 cout<<c<<" is max\n";
      else
	 cout<<d<<" is max\n";
else
   if (b>c)
      if (b>d)
	 cout<<b<<" is max\n";
      else
	 cout<<d<<" is max\n";
   else
      if (c>d)
	cout<<c<<" is max\n";
      else
	cout<<d<<" is max\n";
return 0;
}	 

