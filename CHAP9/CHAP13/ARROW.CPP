#include <iostream.h>
class arrow{
  public:
  int x;
  arrow *operator->()
    {
    cout<<"activating ->\n";
    return(this);
    }
    };
  main()
  {
  arrow a;
  a->x=5;
  cout<<"x="<<a->x<<"="<<a.x<<'\n';
  return 0;
  }

