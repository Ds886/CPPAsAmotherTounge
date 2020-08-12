#include <iostream.h>
template <class T>
 T sum(T a,T b)
  {
	return(a+b);
  }
void main()
 {
  int ix=3,iy=4;
  double dx=3.1,dy=4.2;
  cout<<"ix+iy="<<sum(ix,iy)<<endl;
  cout<<"fx+fy="<<sum(dx,dy)<<endl;
  cout<<"3+4="<<sum(3,4)<<endl;
  //cout<<"3+4.2="<<sum(3,4.2)<<endl;//
 }
