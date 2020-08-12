#include <iostream.h>
void *voidfunc(void *vtr1,void *vptr2);
int result;
main()
{
int x=3,y=2,*intptr;
intptr=(int *)voidfunc(&x,&y);
cout<<"*intptr="<<*intptr<<'\n';
return 0;
}

void *voidfunc(void *vptr1,void *vptr2)
  {
  result=(*(int *)vptr1) * (*(int *)vptr2);
  return(&result);
  }
