struct phone{
 char first_name[15],last_name[15];
 long number;
 phone *next;
 static int n;
 phone(const char *last,const char *first,long num);
 ~phone();
 void print();
 };
