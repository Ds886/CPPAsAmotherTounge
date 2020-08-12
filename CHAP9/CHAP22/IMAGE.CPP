#include <graphics.h>
#include <conio.h>
main()
{
int graphdriver=DETECT,graphmode;
void *buffer;
unsigned size;
initgraph(&graphdriver,&graphmode,"");
circle(100,100,50);
size=imagesize(0,0,200,200);
buffer= new char(size);
getimage(0,0,200,200,buffer);
getch();
putimage(200,200,buffer,COPY_PUT);
getch();
delete [size]buffer;
closegraph();
return(0);
}