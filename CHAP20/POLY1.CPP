 #include <iostream.h>
 #include <typeinfo.h>
 #include <string.h>
 class point{
  int x,y;
  public:
  GetX(){return x;}
  GetY(){return y;}
  virtual char *name(){return("point");}
  point(int Ix,int Iy){x=Ix;y=Iy;}
  };

 class DerivedPoint: public point{
  public:
  char *name(){return("DerivedPoint");}
  DerivedPoint(int Ix,int Iy):point(Ix,Iy){};
  void  show(){cout<<"x="<<GetX()<<" y="<<GetY()<<endl;}
  };


void  main()
 {
  point *ptr;
  DerivedPoint dp1(3,4);
  ptr=&dp1;
  cout<<"ptr is of type: "<<ptr->name()<<endl;
  if ( strcmp(ptr->name(),"DerivedPoint" )== 0)
		 ((DerivedPoint *)(ptr))->show();
  }