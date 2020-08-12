class wind{
 protected:
 int left,top,right,bottom;
 int BackColor,FrameColor;
 void DrawFrame();
 public:
 wind(int Ileft,int Itop,int Iright,int Ibottom)
  {
  left=Ileft;
  top=Itop;
  right=Iright;
  bottom=Ibottom;
  BackColor=BLUE;
  FrameColor=WHITE;
  }
 void SetFrameColor(int Ncolor){FrameColor=Ncolor;};
 void SetBackColor(int Ncolor){BackColor=Ncolor;};
 void Create();
 };

   



