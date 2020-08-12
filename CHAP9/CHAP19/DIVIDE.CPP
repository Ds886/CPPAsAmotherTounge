#include <iostream.h>
double divide(double x, double y)
	{
		if (y==0)
		{
		  throw "trying to divide by zero in the divide function";
		  return 0;
		}
		else
		 return(x/y);
	}
void main()
{
	try
	 {
	cout<<"5/2="<<divide(5,2)<<endl;
	cout<<"5/0="<<divide(5,0)<<endl;
	cout<<"7/3="<<divide(7,3)<<endl;
	 }
	catch(char *msg)
	 {
	  cout<<msg<<endl;
	 }
	cout<<"end of main"<<endl; 
}
