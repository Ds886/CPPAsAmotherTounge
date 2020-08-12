struct point{
   int a,b;
   point(int x,int y){a=x;b=y;}
void   show(){cout<<"a="<<a<<" b="<<b<<'\n';}
   };
class line{
point *p1,*p2;
public:
line(int x1,int y1,int x2,int y2)
   {
   p1=new point(x1,y1);
   p2=new point(x2,y2);
   cout<<"constructing object\n";
   cout<<"p1: ";
   p1->show();
   cout<<"p2: ";
   p2->show();
   }
~line()
{
cout<<"destructing object\n";
cout<<"p1: ";
p1->show();
cout<<"p2: ";
p2->show();
delete p1;delete p2;
}
void show()
   {
   cout<<"p1: ";
   p1->show();
   cout<<"p2: ";
   p2->show();
   }
};
