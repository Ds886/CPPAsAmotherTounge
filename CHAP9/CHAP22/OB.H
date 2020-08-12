class ob : public coord,public circ{
   public:
   ob(int Iwidth,int Ihight,double Ix,double Iy,int Icolor,double Iradius):
     coord(Iwidth,Ihight),
     circ(tranX(Ix),tranY(Iy),Icolor,Iradius*maxx/(2*width))
	{};
  void MoveCoord(int Nx,int Ny)
	{
	move(Getx()+Nx,Gety()-Ny);
	coord::MoveCoord(Nx,Ny);
	} 
  void   moved(double Nx,double Ny)
       {
       hide();
       Setx(tranX(Nx));
       Sety(tranY(Ny));
       show();
       }
     };
class draw:public ob{
  int active;
  public:
  draw(int Iwidth,int Ihight,double Ix,double Iy,int Icolor,double Iradius):
  ob(Iwidth,Ihight,Ix,Iy,Icolor,Iradius)
   {
   active=1;
   };
  void SetAct(){active=1;}
  void ResetAct(){active=0;};
 void hide(){
  if (active==0) ob::hide();
 };
    };
