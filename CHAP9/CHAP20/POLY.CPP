 #include <iostream.h>
 #include <typeinfo.h>
 class point{
  int x,y;
  public:
  GetX(){return x;}
  GetY(){return y;}
  virtual int f1(){return(x+y);}
  point(int Ix,int Iy){x=Ix;y=Iy;}
  };

 class DerivedPoint: public point{
  public:
  int f1(){return(GetX()*GetY());}
  DerivedPoint(int Ix,int Iy):point(Ix,Iy){};
  void  show(){cout<<"x="<<GetX()<<" y="<<GetY()<<endl;}
  };


void  main()
 {
  point *ptr;
  DerivedPoint dp1(3,4);
  ptr=&dp1;
  cout<<"ptr is of type: "<<typeid(ptr).name()<<endl;
  cout<<"*ptr is of type: "<<typeid(*ptr).name()<<endl;
  if ( typeid(*ptr) == typeid(DerivedPoint) )
		 ((DerivedPoint *)(ptr))->show();
  }
