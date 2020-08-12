#include <graphics.h>
#include <conio.h>
main()
{
int graphdriver=DETECT,graphmode;
initgraph(&graphdriver,&graphmode,"");
setfillstyle(SOLID_FILL,MAGENTA);
bar3d(100,10,200,100,5,1);
setfillstyle(HATCH_FILL,RED);
bar(30,30,80,80);
getch();
closegraph();
return(0);
}