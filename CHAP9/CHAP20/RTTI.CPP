 #include <iostream.h>
 #include <typeinfo.h>
 class point{
  int x,y;
  public:
  point(int Ix,int Iy){x=Ix;y=Iy;}
  };
void  main()
 {
  point p1(3,1),*ptr;
  int x;
  ptr=new point(5,4);
  cout<<"p1 is of type: "<<(typeid(p1)).name()<<endl;
  cout<<"ptr is of type: "<<(typeid(ptr)).name()<<endl;
  cout<<"int is of type: "<<(typeid(int)).name()<<endl;
  cout<<"x is of type: "<<(typeid(x)).name()<<endl;
  }
