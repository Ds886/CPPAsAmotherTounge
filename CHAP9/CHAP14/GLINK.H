  class block{
 public:
 block *next;
 block(){next=NULL;}
 virtual void show()=0;
 void AddAfter(block *Nblock)
     {
	next=Nblock;
     }
 };
class list{
  block *root;
  block *tail;
 public:
 list(){root=NULL;tail=NULL;}
  void add(block *Nblock);
 void print();
 };
 class num:public block{
    int x;
   public:
   num(int Ix){x=Ix;}
   void show(){cout<<"num : x="<<x<<' ';}
   };
class string : public block{
    char str[80];
  public:
  string(const char *s)
     {
	strcpy(str,s);
      }
    void show(){cout<<"string : s="<<str<<' ';}
    };