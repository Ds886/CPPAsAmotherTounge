#include <iostream.h>
class Object{
 int x;
 public:
 Object(){cout<<"Constructing the object"<<endl;}
 void Set(int Ix);

 ~Object();
};

 Object::~Object()
 {
 cout<<"destructing the object"<<" x="<<x<<endl;
 }

void Object::Set(int Ix)
 {
  cout<<"Initializing the object"<<" x="<<Ix<<endl;
  if (Ix<0)
  throw "x can't be negative";
 else
  x=Ix;
 }

void main()
 {
  try
  {
  Object *pOb1,*pOb2;
  pOb1 = new Object;
  pOb2 = new Object;

  pOb1->Set(5);
  pOb2->Set(-1);

  delete pOb1;
  delete pOb2;
  }
  catch(char *msg)
	{
	 cout<<msg<<endl;
	}
  }



