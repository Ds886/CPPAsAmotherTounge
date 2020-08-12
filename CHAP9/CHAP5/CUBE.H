class cube{
float x[3];
public:
cube(float a,float b,float c)
{ 
x[0]=a;x[1]=b;x[2]=c;
}
float surface();
float volume();
float get_a(){return(x[0]);}
float get_b(){return(x[1]);}
float get_c(){return(x[2]);}
};

