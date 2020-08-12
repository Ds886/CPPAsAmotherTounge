#include <iostream.h>
int x=2;
class base{
public:
int x;
void show(){cout<<"x="<<x<<'\n';}
};
class derived : public base{
public:
int x;
void show(){cout<<"x="<<x<<'\n';}
void showglobal(){cout<<"global x="<<::x<<'\n';}
};
main()
{
derived d;
d.x=6;
d.base::x=5;
d.show();
d.base::show();
d.showglobal();
return 0;
}
