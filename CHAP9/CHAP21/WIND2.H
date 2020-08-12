#include "wind1.h"
#include "menu.h"


class wind2 : public wind1{
   char status[80];
   void PrintStatus();
   public:
    menu *m_ptr;
   wind2(int Ileft,int Itop,int Iright,int Ibottom):
       wind1(Ileft,Itop,Iright,Ibottom)
       {
       strcpy(status,"this is the status line");
     
       }
   void SetManue(menu *m){m_ptr=m;}
   void function(int num);
   void Create()
    {
    wind1::Create();
    PrintStatus();
    }
   void GotoManue();
};






