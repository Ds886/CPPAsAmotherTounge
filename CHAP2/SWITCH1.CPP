#include <iostream.h>
main()
{
int x;
cin>>x;
switch(x){
 case 1:
 case 2:
 case 3:
    cout<<"small number was pressed\n";
 case 4:
     cout<<"good choise\n";
     break;
 case 5:
 case 6:
 case 7:
    cout<<"a Large number was pressed\n";
    break;
 default:
   cout<<"out of rang\n";
 }
return 0;
}
  