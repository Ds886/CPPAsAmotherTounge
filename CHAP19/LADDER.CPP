#include <iostream.h>
#include <string.h>
const int SizeNameError = 10;
const long QuantityError1 = 100001;
const long QuantityError2 = -1;
const double PriceError1 = 1001.00;
const double PriceError2 = -1.00;

class product{
 char name[10];
 long quantity;
 double price;
 public:
 void init(char *Iname,long Iquantity,double Iprice)
  {

	if (strlen(Iname) > 9 )
	  throw SizeNameError;
	else
		strcpy(name,Iname);

	if (Iquantity>100000)
		throw QuantityError1;
	else if (Iquantity<0)
		throw QuantityError2;
	else
	  quantity=Iquantity;

	if (Iprice>1000)
		throw PriceError1;
	else if (Iprice<0)
		throw PriceError2;
	else
	  price=Iprice;
	}
	void show()
	 {
		cout<<"name="<<name<<" Quantity="<<quantity<<" Price="<<price<<endl;
	 }
	};

void main()
 {
  product p[6];
  char  *name[6]={"milk","bread","White_suger","pen","flag","suger"};
  long quantity[6]={120000,70,90,-8,50,200};
  double price[6]={7.10,-5.30,10.25,2.51,2000.25,17.30};

for(int i=0;i<6;i++)
 {
	try
	 {
	   cout<<endl;
		cout<<"input"<<endl;
		cout<<name[i]<<" "<<quantity[i]<<" "<<price[i]<<endl;
		p[i].init(name[i],quantity[i],price[i]);
		p[i].show();
	  }
	 catch(int i)
	  {
		cout<<"size of name is too long"<<endl;
	  }
	 catch(long l)
	  {
		if (l>100000)
		  cout<<"quantity can't be more than 100000"<<endl;
		else
		  cout<<"quantity can't be negative"<<endl;
		}
	  catch(double d)
		{
		 if (d>1000)
		  cout<<"Price is over 1000"<<endl;
		 else
		  cout<<"price cannot be negative"<<endl;
		 }
		}
	 }





