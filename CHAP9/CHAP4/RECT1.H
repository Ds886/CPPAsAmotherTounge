class rect{
  int a,b;
  public:
  rect(int x,int y)
    {
    if (0<x && x<25)
	a=x;
    else
       {
       cout<<"error inputting a\n";
       exit(1);
       }
     if (0<y && x<80)
	b=y;
    else
       {
       cout<<"error inputting b\n";
       exit(1);
       }
     }
  void set_a(int x)
     {
     if (0<x && x<25)
       a=x;
       else
       {
       cout<<"error inputting a\n";
       exit(1);
       }
      }
  void set_b(int y)
    {
       if (0<y && y<80)
	b=y;
    else
       {
       cout<<"error inputting b\n";
       exit(1);
       }
     }
  int get_a(){return(a);}
  int get_b(){return(b);}  
  void show();
  int area();
  int perimeter();
  };


