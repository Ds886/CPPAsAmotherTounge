class loc{
  int x,y;
  public:
  loc(){};
  loc(int Ix,int Iy){x=Ix;y=Iy;}
  virtual void  Setx(int Nx){x=Nx;}
  virtual  void  Sety(int Ny){y=Ny;}
  int Getx(){return(x);}
  int Gety(){return(y);}
  };
class point:public loc{
    int color;
    public:
    point(){};
    point(int Ix,int Iy,int Icolor):loc(Ix,Iy)
       {
       color=Icolor;
       }
    void SetColor(int Ncolor){color=Ncolor;}
    GetColor(){return(color);}
    virtual void show();
    virtual void hide();
    void move(int Nx,int Ny);
    };
class circ: public point{
  int radius;
  public:
  circ(int Ix,int Iy,int Icolor,int Iradius):
    point(Ix,Iy,Icolor)
    {
    radius=Iradius;
    }
 void  SetRadius(int Iradius){radius=Iradius;}
  GetRadius(){return(radius);}
  void show();
  void hide();
  };
void initialize();



