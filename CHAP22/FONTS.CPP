#include <graphics.h>
#include <conio.h>
main()
{
int graphdriver=DETECT,graphmode;
textsettingstype oldtext;
initgraph(&graphdriver,&graphmode,"");
outtextxy(10,10,"Default Text");
gettextsettings(&oldtext);
settextjustify(LEFT_TEXT,TOP_TEXT);
settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
outtextxy(10,30,"Gothic Text");
settextjustify(oldtext.horiz,oldtext.vert);
settextstyle(oldtext.font,oldtext.direction,oldtext.charsize);
getch();
closegraph();
return 0;
}