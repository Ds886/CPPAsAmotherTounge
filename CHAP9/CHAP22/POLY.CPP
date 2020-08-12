#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
 {
 int gdriver=DETECT,gmode,errorcode;
 int maxx,maxy;
 int poly[10];
 initgraph(&gdriver,&gmode,"");
 errorcode=graphresult();
 if (errorcode != grOk)
  {
  printf("Graphics error: %s\n",grapherrormsg(errorcode));
  printf("Press any key to halt:");
  getch();
  exit(1);
  }
  maxx=getmaxx();
  maxy=getmaxy();
  poly[0]=20;   /* 1st vertext */
  poly[1]=maxy/2;

  poly[2]=maxx-20; /* 2nd */
  poly[3]=20;

  poly[4]=maxx-50; /* 3rd */
  poly[5]=maxy-20;

  poly[6]=maxx/2; /* 4th */
  poly[7]=maxy/2;

  poly[8]=poly[0];
  poly[9]=poly[1];

  drawpoly(5,poly);
  getch();
  closegraph();
  return 0;
  }
