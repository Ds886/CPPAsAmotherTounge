#include <iostream.h>
#include <string.h>
#define SIZE 256
struct string{
  char s[SIZE];
  string(){};
  string(const char *str){strcpy(s,str);}
  void show(){cout<<s;}
  string operator+(string s1)
    {
    string tmp;
    strcpy(tmp.s,s);
    strcat(tmp.s,s1.s);
    return(tmp);
    }
  };
main()
{
string s1("Happy "),s2("day"),s3;
s3=s1+s2;
s3.show();
return 0;
}

