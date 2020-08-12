class vector{
  int *p;
  int size;
  public:
  vector(int x);
  ~vector();
  int &operator[](int i);
  };
