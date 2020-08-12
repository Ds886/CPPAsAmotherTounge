#include <iostream.h>
#include <process.h>
#include "rect2.h"
int rect::area()
 {
 int c;
 c=a*b;
 return (c);
 }
int rect::perimeter()
  {
  int d;
  d=(a+b) * 2;
  return (d);
  }
void rect::show()
  {
  int i,j;
  for(i=0;i<b;i++)
    {
    cout<<'\n';
    for(j=0;j<a;j++)
    cout<<'*';
    }
    cout<<'\n';
  }
