#include <iostream.h>
#include <process.h>
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
	 Vint[3]=15;
	 cout<<"Vint[3]="<<Vint[3]<<endl;
	 Vfloat[4]=12.3F;
	 cout<<"Vfloat[4]="<<Vfloat[4]<<endl;
	 Vfloat[20]=5.0F;
	}
  catch(char *Msg)
	{
	 cout<<Msg<<endl;
	}
  }




