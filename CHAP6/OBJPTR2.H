struct point{
  int a,b;
  point(int x,int y){a=x;b=y;}
  void show(){cout<<"a="<<a<<"  b="<<b<<'\n';}
  void add(point *p1,point *p2);
  };
