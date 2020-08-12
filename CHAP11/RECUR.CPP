#include <iostream.h>
void show(char ch,int n)
  {
  if (n==1) cout<<ch<<'\n';
   else
    {
    cout<<ch<<' ';
    show(ch,n-1);
    }
   }
main()
{
show('A',5);
show('B',3);
return 0;
}