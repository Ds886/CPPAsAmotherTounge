class num{
 int x;
 public:
 num *next;
 num(int Ix){next=NULL;x=Ix;}
 void AddAfter(num *Nblock){ next=Nblock;	}
 void show(){cout<<"num: x="<<x<<" ";}
 };

class string
{
 char str[80];
 public:
 string *next;
 string(const char* s){next=NULL;strcpy(str,s);}
  void AddAfter(string *Nblock){next=Nblock;}
  void show(){cout<<"string : s="<<str<<" ";}
 };

template <class T>
class list{
 T *root;
 T *tail;
 public:
 list(){root=NULL;tail=NULL;}
 void add(T *Nblock);
 void print();
 };


