#include <iostream.h>
class square{
   int a,b;
   public:
   square(){};
   square(int Ia,int Ib){a=Ia;b=Ib;}
   area(){return(a*b);}
   perimeter(){return(2*(a+b));}
   friend ostream &operator<<(ostream &out,square s);
   friend istream &operator>>(istream &in,square &s);
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
istream &operator>>(istream &in,square &s)
  {     
  cout<<"Enter a: ";
  in>>s.a;
  cout<<"Enter b: ";
  in>>s.b;
  cout<<'\n';
  return in;
  }
main()
{
square s1,s2;
cout<<"input s1\n";
cin>>s1;
cout<<"input s2\n";
cin>>s2;
cout<<"s1: "<<s1<<"s2: "<<s2;
return 0;
}


