#include <iostream.h>
#include <string.h>

class CError{
  public:
  virtual void print(){cout<<"the input of the product exceeded it's limit"<<endl;}
  };

class CNameError: public CError{
  public:
  void print(){cout<<"the size of the name is to long"<<endl;}
  };

class CQuantityError : public CError{
  public:
  void print(){cout<<"quantity exceeded it's limit"<<endl;}
  };

class CQuantityError1: public CQuantityError{
  public:
  void print(){cout<<"quantity can't be more than 100000"<<endl;}
	};
class CQuantityError2: public CQuantityError{
  public:
  void print(){cout<<"quantity can't be negative"<<endl;}
	};

class CPriceError : public CError{
  public:
  void print(){cout<<"price exceeded it's limit"<<endl;}
  };

class CPriceError1: public CPriceError{
  public:
  void print(){cout<<"price can't be more than 100000"<<endl;}
	};
class CPriceError2: public CPriceError{
  public:
  void print(){cout<<"price can't be negative"<<endl;}
	};


class product{
 char name[10];
 long quantity;
 double price;
 CError Error;
  public:
 void init(char *Iname,long Iquantity,double Iprice)
  {

	if (strlen(Iname) > 9 )
	  throw CNameError();
	else
		strcpy(name,Iname);

	if (Iquantity>100000)
		throw CQuantityError1();
	else if (Iquantity<0)
		throw CQuantityError2();
	else
	  quantity=Iquantity;

	if (Iprice>1000)
		throw CPriceError1();
	else if (Iprice<0)
		throw CPriceError2();
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
	 catch(CError& Msg)
	  {
		Msg.print();
	  }


	 }
	}





