#include <iostream.h>
#include <string.h>
#include "tlist.h"
template <class T>
void list<T>::add(T *Nblock)
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
  template <class T>
	void list<T>::print()
	 {
	  T *tmp;
	  for(tmp=root;tmp!=NULL;tmp=tmp->next)
		 tmp->show();
	 }
void 	main()
 {
  num *tmp;
  string *str;
  list <num> ln;
  list <string> ls;
  int n;
  char word[80];
  cout<<"input a number then a string\n";
  for(int i=0;i<5;i++)
	{
	 cin>>n>>word;
	 tmp=new num(n);
	 str=new string(word);
	 ln.add(tmp);
	 ls.add(str);
	 }
	ln.print();
	cout<<endl;
	ls.print();
  }