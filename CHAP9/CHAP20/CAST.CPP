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
  DerivedPoint dp1(3,4),*dptr;
  ptr=&dp1;
  if (dptr=dynamic_cast<DerivedPoint*>(ptr))
	 dptr->show();
 }

