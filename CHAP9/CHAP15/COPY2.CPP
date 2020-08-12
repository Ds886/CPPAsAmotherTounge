#include <iostream.h>
#include <string.h>
class string{
  char *str;
  int size;
  public:
  string(){};
  string(const string &s)
    {
    size=s.size;
    str=new char[size];
    strcpy(str,s.str);
    }
  string operator=(const string s)
     {
     size=s.size;
       str=new char[size];
    strcpy(str,s.str);
    return(*this);
    }
     
  string(const char *s)
    {
    size=strlen(s);
    str=new char[++size];
    strcpy(str,s);
    }
  void set(const char *s)
   { 
    if (strlen(s)<size)
      strcpy(str,s);
    }

  void show(){cout<<str<<'\n';}
  };
main()
{
string s1("first1"),s2("second");
s1.show();
s1=s2;
cout<<"s1: ";
s1.show();
s1.set("test");
cout<<"s2: ";
s2.show();
string s3(s2);
cout<<"s3: ";
s3.show();
s2.set("test1");
cout<<"s3: ";
s3.show();
return 0;
}

