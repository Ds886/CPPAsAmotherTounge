#include <iostream.h>
 class square{
  int a;
 public:
 Get_a(){return(a);}
 square(int Ia){a=Ia;}
 void print(){cout<<"print square: a="<<a<<'\n';}
 void out()
 {
    cout<<"squares out ";
    show();
 }
 virtual void show(){cout<<"show square: a="<<a<<'\n';}
 };
class rect:public square{
  int b;
 public:
 rect(int Ia,int Ib):square(Ia){b=Ib;}
 Get_b(){return(b);}
 void print(){cout<<"print rect: a="<<Get_a()<<" b="<<b<<'\n'; }
 void out(){
  cout<<"rects out ";
  show();}
 void show(){cout<<"show rect: a="<<Get_a()<<" b="<<b<<'\n';}
 };
main()
 {
    int x,y;
    square *s_ptr;
    rect r1(5,7);
    s_ptr=&r1;
    x=s_ptr->Get_a();
    //y=s_ptr->Get_b();//wrong does not recognize such a function
    s_ptr->print();
    s_ptr->show();
    s_ptr->out();
    return 0;
  }
