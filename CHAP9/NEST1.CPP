#include <iostream.h>
class CGlobal{
 int z;
  class CLocal{
    int x,y;
    public:
    CLocal(int Ix,int Iy)
      {
       x=Ix;
       y=Iy;
      }
     void show()
     {
      cout<<"x="<<x;
      cout<<" y="<<y;
     }
      
    };
  CLocal L1,L2;
 public:
 CGlobal(int ILx1,int ILy1,int ILx2,int ILy2): L1(ILx1,ILy1),L2(ILx2,ILy2)
  {
   z=4;
  }  
 void show(); 
 };  
 
  void CGlobal::show()
   {
   cout<<"L1: ";
   L1.show(); 
   cout<<'\n'<<"L2: ";
   L2.show();    
   cout<<'\n'<<"z="<<z<<'\n';
   }               
  main()
  {
   CGlobal c1(1,2,3,4);
   //CLocal c2(5,6);
   c1.show();  
   //c2.show();
   return 0;
  }
  
   
 
   
     
    