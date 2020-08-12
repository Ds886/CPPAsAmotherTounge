#include <dos.h>
#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <process.h>
#include "mouse.h"
 mouse::IsLPressed()
    {
    union REGS r;
    r.x.ax=3;
    int86(0x33,&r,&r);
    if (r.x.bx & 0x01)
	return(1);
     else
       return(0);
    }
 mouse::IsRPressed()
    {
    union REGS r;
    r.x.ax=3;
    int86(0x33,&r,&r);
    if (r.x.bx & 0x02)
	return(1);
     else
       return(0);
    }
  

mouse::mouse()
    {
    union REGS r;
    r.x.ax=0;
    int86(0x33,&r,&r);
      }
 void mouse::show()
    {
    union REGS r;
    r.x.ax=1;
    int86(0x33,&r,&r);
     }
  void mouse::hide()
    {
    union REGS r;
    r.x.ax=2;
    int86(0x33,&r,&r);
     }
  void mouse::Getxy(int& x,int& y)
     {
	union REGS r;
    r.x.ax=3;
    int86(0x33,&r,&r);
    x=r.x.cx;
    y=r.x.dx;
    }
