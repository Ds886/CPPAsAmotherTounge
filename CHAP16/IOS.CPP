#include <iostream.h>
#include <iomanip.h>
main()
{
    cout.setf(ios::left);
    float a=12.34F;
    cout<<setfill('*')<<setw(10)<<a<<endl;
    return(0);
}
