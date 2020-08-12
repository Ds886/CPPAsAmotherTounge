#include <iostream.h>
class base{
int a;
protected:
 int b;
public:
 int x;
 base(int Ia,int Ib,int Ix){a=Ia;b=Ib;x=Ix;}
 get_a(){return(a); }
 get_b(){return(b);}
 void show(){cout<<"base: a="<<a<<" b="<<b<<" x="<<x<<'\n';}
 };
class derived :public base{
   int c;
   public:
   derived(int Ia,int Ib,int Ix,int Ic):base(Ia,Ib,Ix)
	{
	c=Ic;
	}
   void show(){cout<<"derived: a="<<get_a()<<" b="<<b<<" x="<<x<<" c="<<c<<'\n';}
   };
main()
{
base b1(1,2,3);
derived d1(4,5,6,7);
b1.show();
d1.show();
cout<<"b1.x="<<b1.x<<'\n';
cout<<"d1.x="<<d1.x<<'\n';
cout<<"d1.b="<<d1.get_b()<<'\n';
return 0;
}

