#include <dos.h>
#include <conio.h>
union port{
  unsigned int x;
  unsigned char h[2];
  };
main()
{
unsigned char pb;
port p;
// pass Timer signels to speaker
pb=inportb(0x61);
pb=pb | 0x03;
outport(0x61,pb);
p.x=1989;
//initiate Timer (channel 2,read/write LSB than MSB Mode 3 binary)
outportb(0x43,0xb6);

//determine speaker frequency
outportb(0x42,p.h[2]);
outportb(0x42,p.h[1]);

//wait ontill key is press
while(!kbhit());

//dont pass Timer signals to speaker
pb=inportb(0x61);
pb=pb & 0x0fc;
outport(0x61,pb);

return 0;
}



