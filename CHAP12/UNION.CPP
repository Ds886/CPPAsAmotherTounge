#include <iostream.h>
#include <iomanip.h>
union word{
 unsigned short int x;
 char c[2];
 word(unsigned int Ix){x=Ix;}
 void change()
    {
    char tmp;
    tmp=c[0];
    c[0]=c[1];
    c[1]=tmp;
    }
 void show(){cout<<"x="<<hex<<x<<'\n';}
 };
main()
{
word x(0x1234);
x.show();
x.change();
x.show();
return 0;
}

 