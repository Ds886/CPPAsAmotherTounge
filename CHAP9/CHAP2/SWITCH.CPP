#include <iostream.h>
#include<conio.h>
main()
{
clrscr();
int x;
cout<<"input the number of operation you want\n";
cout<<"1 : for reading a file\n";
cout<<"2 : for saving a file\n";
cout<<"3 : for saving the file in another name\n";
cout<<"0 : for quitting\n";
cin>>x;
switch(x){
  case 1:
     cout<<"reading\n";
     break;
  case 2:
      cout<<"saving\n";
      break;
  case 3:
     cout<<"saving the file in another name\n"
	 <<" press eny key to continu";
	 getch();
     break;
  case 0:
     cout<<"quitting\n";
     cout<<"press eny key to continu..";
     getch();
     break;
  default:
    cout<<"you have pressed on a wrong number\n";
    }
  return 0;
  }



