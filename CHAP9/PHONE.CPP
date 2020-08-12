#include <iostream.h>
#include "phone.h"
#include <string.h>
#include <process.h>
#include <iomanip.h>       

int phone::n;

 phone::phone(const char *last,const char *first,long num)
   {
    if ( strlen(last)<15 )
	 strcpy(last_name,last);
    else
       {
	cout<<"Error! the last name is too long\n";
	exit(1);
	}
     if ( strlen(first)<15 )
	 strcpy(first_name,first);
    else
       {
	cout<<"Error! the first name is too long\n";
	exit(1);
	}          
    number=num;
  next=NULL;
  n++;
  }
phone::~phone()
  {
    cout<<"destructing phone number "<<n<<'\n';
    print();
   n--;
  }

void phone::print()
   {
    cout<<setw(15)<<last_name<<setw(15)<<first_name<<setw(15)<<number<<'\n';
   }

