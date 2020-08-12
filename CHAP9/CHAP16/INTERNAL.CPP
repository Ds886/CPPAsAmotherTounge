#include <iostream.h>
#include <iomanip.h>
main()
{
    char word1[15]="ITzhak";
    float f=17.54F,x=5.0F,y=5.23F;
    int a=0x7a2f;
    cout<<setprecision(3);
    cout.setf(ios::showpos);
    cout<<setw(10)<<f<<endl;
    cout.setf(ios::internal);
    cout<<setw(10)<<f<<endl;
    cout<<setw(10)<<setfill('*')<<f<<endl;
    cout.unsetf(ios::internal);
    cout.setf(ios::scientific);
    cout<<setw(10)<<f<<endl;
    cout.setf(ios::uppercase);
    cout<<setw(10)<<f<<endl;
    cout.unsetf(ios::uppercase);
    cout<<setw(10)<<f<<endl;
    cout.setf(ios::fixed);
    cout<<setw(10)<<f<<endl;
    cout<<setw(10)<<a<<endl;
    cout.setf(ios::hex);
    cout<<setw(10)<<a<<endl;
    cout.setf(ios::showbase);
    cout<<setw(10)<<a<<endl;
    cout.setf(ios::uppercase);
    cout<<setw(10)<<a<<endl;
    cout<<setw(10)<<word1<<endl;
    cout.setf(ios::left);
    cout<<setw(10)<<word1<<endl;
    cout<<setw(10)<<x<<endl;
    cout.setf(ios::showpoint);
    cout<<setw(10)<<x<<endl;
    cout<<setw(10)<<y<<endl;
    return(0);
}
