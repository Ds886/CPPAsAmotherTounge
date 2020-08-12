#include <iostream.h>
class point{
 int x,y;
 public:
 point(int Ix,int Iy)
 {
 x=Ix;y=Iy;
 cout<<"in point constructor: "<<x<<' '<<y<<'\n';
 }
 ~point(){cout<<"point destructor: "<<x<<' '<<y<< '\n';}
 void show(){cout<<" x="<<x<<" y="<<y<<'\n';}
 };
class line{
  int color;
  point p1,p2;
 public:
  line(int Icolor,
		int Ix1,int Iy1,
		int Ix2,int Iy2):p1(Ix1,Iy1),p2(Ix2,Iy2)
  {
	cout<<"int line constructor"<<'\n';
	color=Icolor;
  }
  ~line(){cout<<"line destructor"<<'\n';}
 void show()
  {
  cout<<"line: "<<'\n';
  cout<<"p1:";
  p1.show();
  cout<<"p2:";
  p2.show();
  }
 };
 void main()
  {
	line l1(1,2,3,4,5);
	l1.show();
  }
