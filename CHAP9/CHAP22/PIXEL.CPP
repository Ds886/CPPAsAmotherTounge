#include <graphics.h>
#include <iostream.h>
#include <process.h>
#include <conio.h>
#include "loc.h"

void initialize()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics mode */
	initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      cout<<"Graphics error: %s check the BGI directory\n", grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();
      exit(1);             /* return with error code */
   }
}

void point::show()
  {
  putpixel(Getx(),Gety(),GetColor());
  }
void point::hide()
  {
  int bkcolor;
  bkcolor=getbkcolor();
  putpixel(Getx(),Gety(),bkcolor);
  }
void point::move(int Nx,int Ny)
   {
   hide();
   Setx(Nx);
   Sety(Ny);
   show();
   }
void circ::show()
  {
  setcolor(GetColor());
  circle(Getx(),Gety(),GetRadius());
  }
void circ::hide()
   {
   setcolor(getbkcolor());
   circle(Getx(),Gety(),GetRadius());
   }
