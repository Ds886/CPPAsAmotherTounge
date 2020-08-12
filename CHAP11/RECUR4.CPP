#include <iostream.h>
max(const int *vect)
   {
   if (*vect==0) return 0;
     else
      {
      if (*vect>max(vect+1))
	  return(*vect);
      else
	return(max(vect+1));
      }
     }
main()
{
int num[10]={5,25,7,89,64,12,3,17,34,0};
int x;
x=max(num);
cout<<"x="<<x<<'\n';
return 0;
}