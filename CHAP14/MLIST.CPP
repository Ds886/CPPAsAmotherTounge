#include <iostream.h>
#include <conio.h>
#include "phone.h"
#include "list.h"
main()
{
    char last[15],first[15];
    long num;
  
    list *l1=new list("Lennon","John",456641);
    phone1 *ph1=new phone1("Haim","Moshe",345765),*tmp_phone1;
    phone *ph2=new phone("Rabin","Itzhak",467323),*phone_ptr;
    l1->insert(ph1);
    l1->insert(ph2);
    l1->print();
    tmp_phone1=(phone1 *)l1->find("Haim");
    num=tmp_phone1->get_number();
    cout<<"phone number of Haim is "<<num<<'\n';
    delete l1;
  return 0;
  }
