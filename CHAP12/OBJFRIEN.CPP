#include <iostream.h>
class class2;
class class1{
int PrivateX;
friend class class2;
public:
class1(int IPrivateX){PrivateX=IPrivateX;}
void show(){cout<<"PrivateX="<<PrivateX<<'\n';}
getX(){return PrivateX;}
};
class class2{
int PrivateY;
public:
class2(int IPrivateY){PrivateY=IPrivateY;}
GetY(){return PrivateY;}
void show(){cout<<"PrivateY="<<PrivateY<<'\n';}
void SetObject(class1 ob)
 {
  class1 LocalObject(3);
  ob.PrivateX=5;
  LocalObject.PrivateX=7;
  ob.show();
  LocalObject.show();
 }
};
main()
{
class1 ob1(5);
class2 ob2(6);
ob2.SetObject(ob1); 
return 0;
}