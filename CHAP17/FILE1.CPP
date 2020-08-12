#include <iostream.h>
#include <iomanip.h>
#include <string.h>
#include <fstream.h>
class phone{
  char fname[80];
  char lname[80];
  char street[256];
  long number;
  public:
  phone(){};
  phone(const char *Ifname,const char *Ilname,const char *Istreet,long Inumber)
    {
    strcpy(fname,Ifname);
    strcpy(lname,Ilname);
    number=Inumber;
    strcpy(street,Istreet);
    }
  friend ostream &operator<<(ostream &out,phone ph) ;
  friend istream &operator>>(istream &in,phone &ph);
};
 ostream &operator<<(ostream &out,phone ph)
  {
   out<<setw(10)<<ph.fname<<setw(10)
   <<ph.lname<<setw(10)<<ph.number<<setw(10)<<ph.street<<endl;
   return out;
   }
  istream &operator>>(istream &in,phone &ph)
   {
   cout<<"\nEnter last name: ";
   in>>ph.fname;
   cout<<"\nEnter first name: ";
   in>>ph.lname;
   cout<<"\nEnter phone number: ";
   in>>ph.number;
   cout<<"\nEnter street : ";
   in>>ph.street;
   return in;
   }
  main()
  {
  phone p1,p2;
  cin>>p1>>p2;
  ofstream f1("phone.txt");
  f1<<p1<<p2;
  f1.close();
  return 0;
  }
 
 

