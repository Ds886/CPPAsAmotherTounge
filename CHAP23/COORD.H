class coord{
   protected:
   int width,hight;
   int Ox,Oy;
   float Csize;
   public:
   coord(int Iwidth,int Ihight);
   static int maxx,maxy;
   GetOx(){return(Ox);}
   GetOy(){return(Oy);}

   void SetOxy(int NOx,int NOy)
     {
     Ox=NOx;
     Oy=NOy;
     }
   tranX(double nx){return(nx*(maxx/2)/width+Ox);}
   tranY(double ny){return(-(ny*(maxy/2)/hight)+Oy);}
   void   SetCsize(float ICsize){Csize=ICsize;}
   float GetCsize(){return(Csize);}

virtual   void DrawCoord();
virtual   void HideCoord();
virtual   void MoveCoord(int Nx,int Ny);
   };













