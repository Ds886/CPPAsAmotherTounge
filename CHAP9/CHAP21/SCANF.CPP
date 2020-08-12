#include <stdio.h>
main()
{
int x,y;
float f;
char name[15];
printf("input x y f name\n");
scanf("%d %d %f %s",&x,&y,&f,name);
printf("x=%d y=%d f=%f name=%s",x,y,f,name);
return 0;
}