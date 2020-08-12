class List1{
 phone *head;
public:
List1(const char *last,const char *first,long num);
~List1();
void insert(phone *p);
phone *find_place(const char *last);
phone *find(const char *last);
phone *find_last_place();
del(const char *last);
void print();
};
