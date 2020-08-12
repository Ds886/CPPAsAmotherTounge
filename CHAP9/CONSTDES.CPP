#include <iostream.h>
class point{
int a,b;
static int n;
public:
	void show();
point(int x,int y)
   {
   a=x;b=y;
   cout<<"constructing point number "<<++n<<" a="<<a<<" b="<<b<<'\n';
   }
~point(){cout<<"destructing point number "<<n--<<" a="<<a<<" b="<<b<<'\n';}
}p1(7,10),p2(8,12);
point p3(2,4);
void f1(point p)
 {
 static point ps(25,35);
 point px(20,30),py(40,50),*p_ptr;
 p_ptr=new point(70,10);
 point pz(3,6);
 delete p_ptr;
 }
int point::n;
main()
{
cout<<"in main\n";
point pm(17,18);
f1(pm);
cout<<"main is done\n";
return 0;
}


void point::show()
{

}
