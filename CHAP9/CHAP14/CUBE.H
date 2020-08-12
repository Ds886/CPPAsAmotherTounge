  class cube{
    protected:
    int a,h;
    public:
    cube(int Ia,int Ih){a=Ia;h=Ih;}
    virtual area(){return(a*a);}
    volume(){return(h*area());}
    };
 

      