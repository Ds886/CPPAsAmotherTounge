#include <iostream.h>
#include <string.h>
#include "glink.h"
 void list::add(block *Nblock)
   {
    if (root==NULL)
	{
	root=Nblock;
	tail=Nblock;
	}
    else
	{
	tail->AddAfter(Nblock);
	tail=Nblock;
	}
    }
void list::print()
  {
    block *tmp;
    for(tmp=root;tmp!=NULL;tmp=tmp->next)
       tmp->show();
  }

main()
{
    num *tmp;
    string *str;
    list l;
    int i,n;
    char word[80];
    cout<<"input a number then a string \n";
    for(i=0;i<5;i++)
       {
      cin>>n>>word;
      tmp=new num(n);
      str=new string(word);
      l.add(tmp);
      l.add(str);
      }
    l.print();
  return(0);
  }
