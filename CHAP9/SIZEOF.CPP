#include <iostream.h>
class point{
  int a,b;
  public:
  static int n;
  point(int x,int y){a=x;b=y;}
  void show(){cout<<"a="<<a<<" b="<<b<<'\n';}
  };
main()
{
int x;
float f;
point p(5,9);
cout<<"sizeof(int)="<<sizeof(int)<<"  sizeof(float)="<<sizeof(float)<<
       "   sizeof(point)="<<sizeof(point)<<'\n';
int vect[10];
cout<<"sizeof(vect)="<<sizeof(vect)<<'\n';
return 0;
}
