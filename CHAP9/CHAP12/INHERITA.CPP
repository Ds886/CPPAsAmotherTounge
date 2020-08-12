#include <iostream.h>
class square{
  float a;
  public:
  square(float Ia){a=Ia;}
float get_a(){return(a);}
void set_a(float Na){a=Na;}
void show(){cout<<"this is a square a="<<a<<'\n';}
};
class rectangle:public square{
    float b;
    public:
    rectangle(float Ia,float Ib):square(Ia){b=Ib;}
   void set_b(float Nb){b=Nb;}
   void show(){cout<<"This is a rectangle a="<<get_a()<<" b="<<b<<'\n';}
   };
main()
{
square s(5.0F);
rectangle  r(2.0F,7.0F);
s.show();
r.show();
s.set_a(25.0F);
r.set_a(20.0F);
s.show();
r.show();
return 0;
}
