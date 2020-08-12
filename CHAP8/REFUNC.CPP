#include <iostream.h>
int vect[10]={0,1,17,2,8,25,32,15,48,5};
int& find(int n)
  {
  int i;
  for(i=0;i<10 && vect[i] != n;i++);
    if (n==vect[i])
	return(vect[i]);
    else
      return vect[0];
  }
main()
{
int i;
for(i=0;i<10;i++)
  cout<<vect[i]<<' ';
cout<<'\n';

find(25)=100;
for(i=0;i<10;i++)
  cout<<vect[i]<<' ';
cout<<'\n';
return 0;
}