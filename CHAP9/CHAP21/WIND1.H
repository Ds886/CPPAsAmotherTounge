#include "wind.h"
class wind1 : public wind{
   char title[80];
   int num;
 public:
 wind1(int Ileft,int Itop,int Iright,int Ibottom):
    wind(Ileft,Itop,Iright,Ibottom)
     {
     title[0]=0;
     num=1;
     }
 void SetTitle(const char *Til){strcpy(title,Til);}
 void SetNum(int Nnum){num=Nnum;}
 int GetNum(){return(num);}
 void Create()
  {
  int Tlength;
  int Tplace;
  wind::Create();
  window(1,1,80,25);
  gotoxy(right-3,top);
  cprintf("%d",num);
  Tlength=strlen(title);
  Tplace=left+(right-left)/2-Tlength/2;
  gotoxy(Tplace,top);
  cprintf("%s",title);
  window(left+1,top+1,right-1,bottom-1);
  }
 };

  

