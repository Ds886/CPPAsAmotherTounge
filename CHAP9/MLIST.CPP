#include <iostream.h>
#include "phone.h"
#include "List1.h"
main()
{
	char last[15],first[15];
    long num;
    List1 *l1=new List1("Lennon","John",456641);
    phone *ph1=new phone("Haim","Moshe",345765),*ph2=new phone("Rabin","Itzhak",467323),*phone_ptr;
    l1->insert(ph1);
    l1->insert(ph2);
    l1->print();
    l1->del("Haim");
    cout<<"after deleting\n";
    l1->print();
     cout<<"input last name first name and phone number\n";
    do{
     cin>>last>>first>>num;
	phone_ptr=new phone(last,first,num);
	l1->insert(phone_ptr);
     }
   while(num);

    l1->print();
  delete l1;
  return 0;
  }
