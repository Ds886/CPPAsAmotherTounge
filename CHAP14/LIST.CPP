#include <iostream.h>
#include <string.h>
#include "phone.h"
#include "list.h"

list::list(const char *last,const char *first,long num)
   {
    head=new phone(last,first,num);
    }

phone *list::find_last_place()
   {
      phone *tmp,*prev;
    for(tmp=head,prev=head;tmp->next;prev=tmp,tmp=tmp->next);
	 return(prev);

   }

phone *list::find(const char *last)
  {
    phone *tmp,*prev;
    for(tmp=head,prev=head;tmp != NULL;prev=tmp,tmp=tmp->next)
      if (strcmp(last,tmp->last_name)==0)
	 return(prev);
      return(prev);
    }

phone *list::find_place(const char *last)
  {
    phone *tmp,*prev;
    for(tmp=head,prev=head;tmp != NULL;prev=tmp,tmp=tmp->next)
      if (strcmp(tmp->last_name,last)>=0)
	 return(prev);
      return(prev);
    }
void list::insert(phone *p)
  {
    phone *tmp;
    if ( strcmp(p->last_name,head->last_name)<0 )
      {
      tmp=head;
      head=p;
      p->next=tmp;
      return;
      }
    tmp=find_place(p->last_name);
    p->next=tmp->next;
    tmp->next=p;
   }

void list::print()
  {
    phone *tmp;
    for(tmp=head;tmp!=NULL;tmp=tmp->next)
       tmp->print();
    cout<<"Total number of Objects are "<<tmp->n<<'\n';
  }

list::del(const char *last)
  {
    phone *place,*tmp;

    if (!strcmp(last,head->last_name))
      {
      tmp=head;
      head=head->next;
      delete tmp;
      return(1);
      }

    place=find(last);
    tmp=place->next;
    if (tmp == NULL || strcmp(tmp->last_name,last)!=0 )
	 return(0);
    else
       {
	place->next=place->next->next;
	delete tmp;
	return(1);
       }
    }

 list::~list()
   {
    phone *tmp,*tmpn;
    for(tmp=head,tmpn=head->next;tmpn!=NULL;tmp=tmpn,tmpn=tmpn->next)
       delete tmp;
    delete tmp;
    }
