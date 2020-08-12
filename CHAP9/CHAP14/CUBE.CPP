#include <iostream.h>
#include "cube.h"
  class box : public cube{
    protected:
    int b;
    public:
    box(int Ia,int Ib,int Ih):cube(Ia,Ih){b=Ib;}
    area(){return(a*b);}
    };
  main()
  {
  cube c(4,10);
  box  b(4,5,10);
  int Cvolume,Bvolume;
  Cvolume=c.volume();
  Bvolume=b.volume();
  cout<<"Cvolume="<<Cvolume<<"  Bvolume="<<Bvolume<<'\n';
  return 0;
  }

      