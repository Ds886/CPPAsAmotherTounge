class menu{
    char menu[10][8];
    int ActiveManue;
    public:
    menu(const char *str1,
	  const char *str2,
	  const char *str3,
	  const char *str4,
	  const char *str5,
	  const char *str6,
	  const char *str7,
	  const char *str8)
    {
      ActiveManue=2;
       strcpy(menu[0],str1);
       strcpy(menu[1],str2);
       strcpy(menu[2],str3);
       strcpy(menu[3],str4);
       strcpy(menu[4],str5);
       strcpy(menu[5],str6);
       strcpy(menu[6],str7);
       strcpy(menu[7],str8);
       }
       void PrintManue();
       move();

       int GetKey();
    };
