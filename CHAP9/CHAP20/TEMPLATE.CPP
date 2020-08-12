#include <iostream.h>
#include <typeinfo.h>
template <class T>
 class point{
  T x,y;
  public:
  point(T Ix, T Iy){x=Ix;y=Iy;}
  void show()
	{
	 cout<<"x,y are of type: "<<typeid(T).name()<<endl;
	 cout<<"x="<<x<<" y="<<y<<endl;
	}
  };
 void main()
  {
	point <int> p1(3,4);
	point <float> p2(4.3F,7.25F);
	cout<<"showing p1"<<endl;
	p1.show();
	cout<<"showing p2"<<endl;
	p2.show();
  }


