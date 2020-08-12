#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "coord.h"

int coord::maxx;
int coord::maxy;


 coord::coord(int Iwidth,int Ihight)
    {
    Ox=getmaxx()/2;
    Oy=getmaxy()/2;
    maxx=getmaxx();
    maxy=getmaxy();
    width=Iwidth;
    hight=Ihight;
    }
  void coord::DrawCoord()
    {
    int left,right,top,bottom;
    left=tranX(-width*Csize);
    right=tranX(width*Csize);
    top=tranY(hight*Csize);
    bottom=tranY(-hight*Csize);
    setcolor(GREEN);
    line(left,Oy,right,Oy);
    line(Ox,bottom,Ox,top);
    int i;
    for(i=left;i<right;i+=(right-left)/20)
       line(i,Oy-2,i,Oy+2);
     for(i=top;i<bottom;i+=(bottom-top)/20)
       line(Ox-2,i,Ox+2,i);
     char number[80];
     outtextxy(left,Oy+5,itoa(-width*Csize,number,10));
     outtextxy(right,Oy+5,itoa(width*Csize,number,10));
     outtextxy(Ox+5,top,itoa(hight*Csize,number,10));
     outtextxy(Ox+5,bottom,itoa(-hight*Csize,number,10));
    }
  void coord::HideCoord()
    {
    int left,right,top,bottom;
    left=tranX(-width*Csize);
    right=tranX(width*Csize);
    top=tranY(hight*Csize);
    bottom=tranY(-hight*Csize);
    setcolor(getbkcolor());
    line(left,Oy,right,Oy);
    line(Ox,bottom,Ox,top);
    int i;
    for(i=left;i<right;i+=(right-left)/20)
       line(i,Oy-2,i,Oy+2);
     for(i=top;i<bottom;i+=(bottom-top)/20)
       line(Ox-2,i,Ox+2,i);
     char number[80];
     outtextxy(left,Oy+5,itoa(-width*Csize,number,10));
     outtextxy(right,Oy+5,itoa(width*Csize,number,10));
     outtextxy(Ox+5,top,itoa(hight*Csize,number,10));
     outtextxy(Ox+5,bottom,itoa(-hight*Csize,number,10));
    }

  void coord::MoveCoord(int Nx,int Ny)
      {
      HideCoord();
      Ox+=Nx;
      Oy-=Ny;
      DrawCoord();
      }


