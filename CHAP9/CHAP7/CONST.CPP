#include <iostream.h>
#include <string.h>
class book{
  char name[15];
  float price;
  int quantity;
 public:
  book(char *Iname,float Iprice, int Iquantity)
	  {
		strcpy(name,Iname);
		price=Iprice;
		quantity=Iquantity;
	  }
 const char *GetName()const;
 float GetPrice()const;
 GetQuantity()const;
 void SetName(char *Nname)
	{
	 strcpy(name,Nname);
	}
 void SetPrice(float Nprice){price=Nprice;}
 void SetQuantity(int Nquantity){quantity=Nquantity;}
 void show()const
 {
	cout<<"name: "<<name<<" price: "<<price<<" quantity: "
		 <<quantity<<'\n';
 }
 };

 inline const char *book::GetName()const
  {
  return name;
  }

 float book::GetPrice()const
  {
	return price;
  }
 book::GetQuantity() const
  {
	return quantity;
  }
void main()
 {
  const book b1("Mark",5.25F,7);
  book b2("Ruth",6.35F,9);
  cout<<"quantity: "<<b1.GetQuantity()<<'\n';
  //b1.SetPrice(3.2);//
  b2.SetPrice(4.5F);
  b1.show();
  b2.show();
 }


