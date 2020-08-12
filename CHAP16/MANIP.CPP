#include <iostream.h>
#include <iomanip.h>
main()
{
    float f=25.4123467F;
    float a=2.543F,b=2.576F,x=4.23445F,y=78.345F,z=45.6F;
    cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<f<<endl;
    cout<<setw(10)<<x<<setw(10)<<y<<setw(10)<<z<<endl;
    cout<<setprecision(3)<<setfill('*')<<setw(10)<<f<<endl;
    cout<<setprecision(2)<<setfill('@')<<setw(10)<<f<<endl;
    cout<<setprecision(6)<<setfill('$')<<setw(10)<<f<<endl;
    cout<<setprecision(3)<<setfill('$')<<setw(2)<<f<<endl;
    cout<<setw(10)<<"string"<<endl;
    cout<<"shalom"<<endl;
    cout<<f<<endl;

 return(0);
}
