#include <graphics.h>
#include <conio.h>
main()
{
int graphdriver=DETECT,graphmode;
linesettingstype saveline;
initgraph(&graphdriver,&graphmode,"");
getlinesettings(&saveline);
setlinestyle(SOLID_LINE,0,THICK_WIDTH);
rectangle(100,100,170,150);
setlinestyle(saveline.linestyle,saveline.upattern,saveline.thickness);
getch();
closegraph();
}