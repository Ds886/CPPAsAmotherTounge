#include <iostream.h>
class cube{
 public:
 int a,h;
  cube(int Ia,int Ih){a=Ia;h=Ih;}
  area(){return(a*a);}
  };
class box{
 public:
 double a,b,h;
 box(double Ia,double Ib, double Ih)
  {
	a=Ia;
	b=Ib;
	h=Ih;
  }
 double area(){return(a*b);}
 };

 template <class T,class U>
void  volume(T shape,U& result)
  {
	result=shape.h*shape.area();
  }
void main()
 {
  cube c(4,10);
  box b(4.1,5.2,10.3);
  int CubeVolume;
  double BoxVolume;
  volume(c,CubeVolume);
  volume(b,BoxVolume);
  cout<<"volume of cube="<<CubeVolume<<endl;
  cout<<"volume of box="<<BoxVolume<<endl;
 }



