class list{
 phone *head;
public:
list(const char *last,const char *first,long num);
~list();
void insert(phone *p);
phone *find_place(const char *last);
phone *find(const char *last);
phone *find_last_place();
del(const char *last);
void print();
};
