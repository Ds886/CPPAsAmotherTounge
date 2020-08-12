#include <iostream.h>  
class test{
 int x;           
public:
test(int Ix){x=Ix;}
void show(){cout<<"x="<<x<<'\n';}
};  
class base{
 int x;
public:     
base(int Ix){x=Ix;}
virtual void show(){cout<<"x="<<x<<'\n';}
};           

class derived : public base{
 int y;
public:
derived(int Ix,int Iy):base(Ix)
 {
  y=Iy;
 }
void show()
 {
  base::show();
  cout<<"y="<<y<<'\n';
 }         
virtual void func2(){y++;y--;}
};
void main()
 {
  test t(3);
  base b(5),*pb1;
  derived d(3,4);
  cout<<"size of t="<<sizeof(t)<<'\n'; 
  cout<<"size of b="<<sizeof(b)<<'\n';
  cout<<"size of d="<<sizeof(d)<<'\n';
  pb1=&d;
  pb1->show();
 }
  