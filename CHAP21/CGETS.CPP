#include <conio.h>
main()
{
char buffer[82];
char *p;
buffer[0]=80;
cputs("input a string ");
p=cgets(buffer);
cprintf("\r\n cgets read %d characters the string is %s \r\n",buffer[1],p);
cprintf("buffer[2]=%s",&buffer[2]);
return 0;
}