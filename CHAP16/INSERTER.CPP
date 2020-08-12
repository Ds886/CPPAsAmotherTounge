#include <iostream.h>
class square{
    int a,b;
    public:
    square(int Ia,int Ib){a=Ia;b=Ib;}
    area(){return(a*b);}
    perimeter(){return(2*(a+b));}
    friend ostream  &operator<<(ostream &out,square s);
    };
ostream &operator<<(ostream &out,square s)
  {
  int i,j;
  out<<"square a="<<s.a<<" b="<<s.b<<'\n';
  out<<"area="<<s.area()<<'\n';
  out<<"perimeter="<<s.perimeter()<<'\n';
  for(i=0;i<s.a;i++)
    {
    for(j=0;j<s.b;j++)
     out<<'*';
     out<<'\n';
     }
    return out;
  }
main()
{
square s1(4,3),s2(5,7);
cout<<"s1: "<<s1<<"s2: "<<s2;
return 0;
}