class point{
  int a,b;
  public:
  point(int x,int y)
    {
    a=x;
    b=y;
    cout<<"constructing object\n";
    }
  void  show(){cout<<"a="<<a<<" b="<<b<<'\n';}
  };