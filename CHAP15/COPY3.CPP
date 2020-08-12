#include <iostream.h>
#include <string.h>
class string{
char buffer[40];
public:
string(char *str)
 {
  if(strlen(str)>=40)
   {
   cout<<"string is too long"<<'\n';
   return;
   }
  else
   strcpy(buffer,str);
  }
string(const string& str)
 {
  cout<<"in copy functin"<<'\n';
  strcpy(buffer,str.buffer);
  }
void print(){cout<<buffer<<'\n';}

};
void f1(string str)
 {
  cout<<"in function f1"<<'\n';
  str.print();
 }
  
main()
{
string str1("first"),str2("second");
f1(str1);
f1(str2);
return 0;
};