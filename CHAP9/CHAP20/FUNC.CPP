#include <iostream.h>
#include <typeinfo.h>
class oper{
 public:
 double x,y;
 oper(double Ix,double Iy){x=Ix;y=Iy;}
 double sum(){return(x+y);}
 virtual void show()
 {
 cout<<"showing oper"<<endl;
 cout<<"x="<<x<<" Y="<<y<<endl;
 }
 };
class oper1 :public oper{
public:
oper1(double Ix,double Iy):oper(Ix,Iy){};
double mul(){return(x*y);}
void show()
 {
 cout<<"showing oper1"<<endl;
 cout<<"x="<<x<<" Y="<<y<<endl;
 }
};
double f(oper *ptr)
  {
	ptr->show();
	if ( typeid(*ptr) == typeid(oper))
		return ptr->sum();
	else
	  return ((oper1*)ptr)->mul();
	}

void main()
 {
  oper opA(3,2);
  oper1 opB(3,2);
  cout<<f(&opA)<<endl;
  cout<<f(&opB)<<endl;
 }




