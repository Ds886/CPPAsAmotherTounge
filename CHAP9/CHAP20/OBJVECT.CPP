#include <iostream.h>
#include <process.h>
class CIntPoint{
  int x,y;
  public:
  void  print(){cout<<"printing IntPoint: x="<<x<<" y="<<y<<endl;}
  void Set(int Ix,int Iy){x=Ix,y=Iy;}
  CIntPoint operator+(CIntPoint point)
	 {
		CIntPoint TempPoint;
		TempPoint.x=x+point.x;
		TempPoint.y=y+point.y;
		return TempPoint;
	 }
  };

class CFloatPoint{
  float x,y;
  public:
  void  print(){cout<<"printing FloatPoint: x="<<x<<" y="<<y<<endl;}
  void Set(float Ix,float Iy){x=Ix,y=Iy;}
  CFloatPoint operator+(CFloatPoint point)
	 {
		CFloatPoint TempPoint;
		TempPoint.x=x+point.x;
		TempPoint.y=y+point.y;
		return TempPoint;
	 }
  };

template <class T>
class vector{
  T *p;
  int size;
  public:
  vector(int x);
  ~vector();
  T &operator[](int);
  };

template <class T>
vector<T>::vector(int x)
 {
	p=new T[x];
	size=x;
 }

template <class T>
 vector<T>::~vector()
  {
  delete[size]p;
  }

template <class T>
 T &vector<T>::operator[](int i)
  {
	if (i>=0 && i<size)
	  return(p[i]);
	else
	{
	 throw "overflow in vector";
	 return p[0];
	}
	return p[0];
  }
void  main()
 {
  try
	{
	 vector <int> Vint(5);
	 vector <float> Vfloat(7);
	 vector <CIntPoint> VIntPoint(8);
	 vector <CFloatPoint> VFloatPoint(10);

	 Vint[3]=15;
	 cout<<"Vint[3]="<<Vint[3]<<endl;
	 Vfloat[4]=12.3F;
	 cout<<"Vfloat[4]="<<Vfloat[4]<<endl;
	 VIntPoint[0].Set(5,6);
	 VIntPoint[1].Set(3,4);
	 VIntPoint[2]=VIntPoint[0]+VIntPoint[1];
	 VIntPoint[2].print();

	 VFloatPoint[0].Set(5.5F,6.2F);
	 VFloatPoint[1].Set(3.1F,4.4F);
	 VFloatPoint[2]=VFloatPoint[0]+VFloatPoint[1];
	 VFloatPoint[2].print();

	 VFloatPoint[15];

	}
  catch(char *Msg)
	{
	 cout<<Msg<<endl;
	}
  }




