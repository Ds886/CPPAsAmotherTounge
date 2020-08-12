#include <iostream.h>
void reverse(char const *source)
{
if (*source)  
     {
     reverse(source+1);
     cout<<*source;
     }
}  
main()
{
char name[10]="shalom";
reverse(name);
return 0;
}
