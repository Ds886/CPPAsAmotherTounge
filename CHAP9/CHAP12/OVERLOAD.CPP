#include <string.h>
#include <iostream.h>
#include <process.h>
#define SIZE 15
class card{
   int num;
   long phone;
   char name[SIZE];
   public:
   card(int Inum,long Iphone,const char *Iname)
      {
      num=Inum;
      phone=Iphone;
      if (strlen(Iname)<SIZE)
	 strcpy(name,Iname);
      else
      {
       cout<<"error inputting name\n";
       exit(1);
       }
      }
void set(int Nnum){num=Nnum;}
void set(long Nphone){phone=Nphone;}
int set(const char *Nname)
 {
 if (strlen(Nname)<SIZE)
   {
   strcpy(name,Nname);
   return(1);
   }
 else
   return(0);
 }
void show(){cout<<"num="<<num<<" phone="<<phone<<" name="<<name<<'\n';}
};
main()
{
card c(1,753246,"Moshe");
c.show();
c.set(7);
c.show();
c.set(721200);
c.show();
c.set("Dina");
c.show();
return 0;
}
