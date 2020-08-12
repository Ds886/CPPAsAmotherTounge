#include <iostream.h>
#include <dos.h>
main()
{
unsigned char ch;
int c=0;
while (c!=3)
 {
 ch=peekb(0x40,0x17);
 cout<<"Press 1 for NumLock 2 for CapsLock 3 to end\n";
 cin>>c;
 switch (c){
 case 1:  ch=ch | 0x20;break;
 case 2:  ch=ch | 0x40;break;
 }
 pokeb(0x40,0x17,ch);
 }
return 0;
}
