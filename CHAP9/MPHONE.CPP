#include <iostream.h>
#include "phone.h"
main()
 {
    phone ph1("Rabin","Itzhak",7512398),ph2("Bush","George",6390651),*ph3;
    ph3=new phone("Twain","Mark",7253045);
    ph1.print();
    ph2.print();
    ph3->print();
 return 0;
 }
