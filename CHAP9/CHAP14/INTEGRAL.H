class integral{
  protected:
  float a,b;
  float dx;
  public:
  integral(float Ia,float Ib,float Idx){a=Ia;b=Ib;dx=Idx;}
virtual float func(float x){return(x*x);}
virtual float mul(float x){ return(dx*func(x));}
  float sum()
        {
     float x,s;
     for(x=a,s=0.0F;x<=b;x+=dx)
     s+=mul(x);
     return(s);
      }
  };
   

