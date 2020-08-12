#include <iostream.h>
void swap(int *a,int *b);

void swap(int *a,int *b)
 {
 int c;
 cout<<"*a="<<*a<<" *b="<<*b<<'\n';
 c=*a;
 *a=*b;
 *b=c;
 cout<<"*a="<<*a<<" *b="<<*b<<'\n';
 }
main()
{
int x=5,y=6;
swap(&x,&y);
cout<<"x="<<x<<" y="<<y<<'\n';
return 0;
}