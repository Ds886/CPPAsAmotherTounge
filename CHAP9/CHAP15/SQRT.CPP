#include <iostream.h>
#include <process.h>
#include <math.h>
main(int argc,char *argv[])
    {
	double a,b,c,r1,r2;
	if (argc!=4)
	    {
		cout<<"command is sqrt a b c\n";
		exit(1);
	    }
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);
	r1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"the roots are r1="<<r1<<" r2="<<r2<<'\n';
     return(0);
     }
