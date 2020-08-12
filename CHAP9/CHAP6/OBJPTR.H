class point{
int a,b;
public:
point(int x,int y)
  {
  if (y<50 || y>70)
    {
    cout<<"error input of a\n";
    exit(1);
    }
     if (x<50 || x>100)
    {
    cout<<"error input of b\n";
    exit(1);
    }
    a=x;b=y;
  }
set_ab(int x,int y);
get_a(){return(a);}
get_b(){return(b);}
void show();
};
