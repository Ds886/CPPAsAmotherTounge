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

template <class T,int U=10>
class vector{
  T p[U];
  public:
  T &operator[](int);
  };

template <class T,int U>
 T &vector<T,U>::operator[](int i)
  {
	if (i>=0 && i<=U)
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
	 vector <int,7> Vint;
	 vector <float> Vfloat;
	 vector <CIntPoint,11> VIntPoint;
	 vector <CFloatPoint,10> VFloatPoint;

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




