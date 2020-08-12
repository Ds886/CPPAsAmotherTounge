#include <iostream.h>
class Base{
 public:
 Base(){cout<<"Constructing base "<<endl;}
 ~Base(){cout<<"destructing base "<<endl;}
 };

class Object : public Base{
 int *pX;
 public:
 Object(int Ix);
 ~Object();
};

Object::~Object()
 {
 cout<<"destructing the object"<<endl;
 delete pX;
 }

Object::Object(int Ix):Base()
 {
  cout<<"Constructing the object"<<" x="<<Ix<<endl;
  pX = new int(Ix);
  if (Ix<0)
  {
  delete pX;
  throw "x can't be negative";
  }
 }

void main()
 {
  try
  {
  Object ob1(5),ob2(-1);
	 }
  catch(char *msg)
	{
	 cout<<msg<<endl;
	}
  }



