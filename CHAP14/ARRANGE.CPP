#include <iostream.h>
#include <string.h>
#include "arrange.h"
 string::string(char *w0,char *w1,char *w2,char *w3)
     {
	SetSize(4);
	strcpy(word[0],w0);
	strcpy(word[1],w1);
	strcpy(word[2],w2);
	strcpy(word[3],w3);
      }
 string::IsSmaller(int i,int tmp)
     {
	if (strcmp(word[i],word[tmp]) < 0)
	       return(1);
	else
	    return(0);
      }
  void string::swap(int i,int n)
     {
	char tmp[10];
	strcpy(tmp,word[i]);
	strcpy(word[i],word[n]);
	strcpy(word[n],tmp);
      }
   void string::show(int i)
     {
	cout<<i<<" : "<<word[i]<<'\n';
      }


num::num(int x0,int x1,int x2,int x3,int x4)
 {
    size=5;
    x[0]=x0;
    x[1]=x1;
    x[2]=x2;
    x[3]=x3;
    x[4]=x4;
    }

void num::show(int i)
   {
    cout<<i<<" : "<<x[i]<<'\n';
   }

void num::print()
 {
   int i;
   for(i=0;i<size;i++)
      show(i);
 }


  num::findmin(int start)
    {
	int i,tmp=start;
	for(i=start+1;i<size;i++)
	   if (IsSmaller(i,tmp) )
	       tmp=i;
	return(tmp);
     }
 void num::order()
   {
    int i,max;
    for(i=0;i<size;i++)
	{
	max=findmin(i);
	swap(i,max);
	}
    }
num::IsSmaller(int i,int tmp)
     {
	if (x[i]<x[tmp])
	      return(1);
	else
	    return(0);
      }
void num::swap(int i,int n)
    {
	int tmp;
	tmp=x[i];
	x[i]=x[n];
	x[n]=tmp;
    }
main()
{
    num b(3,6,7,2,5);
    cout<<"printing before arranging\n";
    b.print();
    b.order();
    cout<<"\nprinting after arranging\n";
    b.print();
    string d("ruti","dani","moshe","shalom");
    cout<<"printing before arranging\n";
    d.print();
    d.order();
    cout<<"\nprinting after arranging\n";
    d.print();

    return(0);
}
