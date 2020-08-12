#include "mouse.h"

class mouse1: public mouse{
  int lx,ly;
  public:
  mouse1():mouse()
  {
    lx=getmaxx()/2;
    ly=getmaxy()/2; 
    }
  void GetDifference(int& x,int& y)
     {
     int Nx,Ny;
     Getxy(Nx,Ny);
     x=Nx-lx;
     y=Ny-ly;
     lx=Nx;
     ly=Ny;
     } 
  };




