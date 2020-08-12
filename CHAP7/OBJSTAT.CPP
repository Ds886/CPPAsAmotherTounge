#include <iostream.h>
class point{
int x,y;
public:
static int n;
};
class ball{
   public:
   static int a;
   ball(){a++;}
   static get_a(){return(a);}
   }b1,b2,b3;
ball red,blue,white;
int point::n=4; 
int ball::a;
main()
{               
ball basketball,baseball;
point::n++;
cout<<"The number of balls in this program are "<<red.get_a()<<'\n';
ball football;
cout<<"The number of balls in this program are "<<b2.get_a()<<'\n';
cout<<"The number of balls in this program are "<<ball::a<<'\n';
ball newball;
cout<<"The number of balls int the program are"<<newball.get_a()<<'\n';
cout<<"The number of balls int the program are"<<ball::get_a()<<'\n';
cout<<"point::n="<<point::n<<'\n';
return 0;
}


