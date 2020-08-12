#include <iostream.h>
class base{
 int a;
 protected:
 int b;
 public:
 int c;
 base(int Ia,int Ib,int Ic){a=Ia;b=Ib;c=Ic;}
 get_a(){return(a);}
 get_b(){return(b);}
 get_c(){return(c);}
 void show(){cout<<"base:\na="<<a<<" b="<<b<<" c="<<c<<'\n';}
 };
class derived1 : private base{
  int a1;
  protected:
  int b1;
  public:
  int c1;
  derived1(int Ia,int Ib,int Ic,int Ia1,int Ib1,int Ic1):base(Ia,Ib,Ic)
     {
      a1=Ia1; b1=Ib1;c1=Ic1;
      }
  get_a1(){return(a1);}
  get_b1(){return(b1);}
   get_c1(){return(c1);}
  void show(){cout<<"derived1:\na="<<get_a()<<" b="<<b<<" c="<<c<<'\n'
	       <<" a1="<<a1<<" b1="<<b1<<"c1="<<c1<<'\n';}
  };
  class derived2 :  private derived1{
    int a2;
    protected:
    int b2;
    public:
    int c2;
    derived2(int Ia,int Ib,int Ic,int Ia1,int Ib1,int Ic1,int Ia2,int Ib2,
	     int Ic2):derived1(Ia,Ib,Ic,Ia1,Ib1,Ic1)
    {
    a2=Ia2;b2=Ib2;c2=Ic2;
    }
    get_a2(){return(a2);}
    get_b2(){return(b2);}
    void show(){cout<<"derived2\n"
		    <<" a1="<<get_a1()<<" b1="<<b1<<" c1="<<c1<<'\n'
		    <<" a2="<<get_a2()<<" b2="<<b2<<" c2="<<c2<<'\n';}
    };
    main()
    {
    derived2 d2(1,2,3,4,5,6,7,8,9);
    d2.show();
    cout<<"main:\n a2="<<d2.get_a2()<<" b2="<<d2.get_b2()<<" c2="<<d2.c2<<'\n';
    return 0;
    }


	     
