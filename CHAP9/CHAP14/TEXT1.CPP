#include <iostream.h>


void f1(int *Ix)
{
	cout<<*Ix<<'\n';
}
void f1(float *If)
{
	cout<<*If<<'\n';
}
main()
{
	int x=5;
	float f=6.1f;
	f1(&x);
	f1(&f);
	return 0;
}