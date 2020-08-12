 class num{
 int x[5];
 int size;
 int tmp;
 public:
 num(){};
 num(int x0,int x1,int x2,int x3,int x4);
 void SetSize(int z){size=z;}
 findmin(int start);
 virtual IsSmaller(int i,int tmp);
 virtual void swap(int i,int n);
 virtual void show(int i);
 void order();
 void print();
 };
class string:public num{
  char word[4][80];
 public:
 string(char *w0,char *w1,char *w2,char *w3);
 IsSmaller(int i,int tmp);
  void swap(int i,int n);
  void show(int i);
 };
