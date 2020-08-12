 #define SIZE 15
  struct block{
    int num;
  char name[SIZE];
  int height;
  block *right;
  block *left;
  block(int Inum,const char *Iname )
    {
	num=Inum;
	right=NULL;
	left=NULL;
	height=0;
	if (strlen(Iname)<SIZE)
	     strcpy(name,Iname);
	else
	 {
	    cout<<"error inputting name\n";
	    exit(1);
	  }
     }
   void print(){cout<<"num="<<num<<"  name="<<name<<"  height="<<height<<'\n';}
   };
class tree{
  public:
  block *r;
  tree(){r=NULL;}
  void insert(block *root,block *bnew);
  void print(block *root);
  } ;
