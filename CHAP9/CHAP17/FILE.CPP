#include <fstream.h>
#include <iostream.h>
main()
{
    ofstream f1("file.txt");
    char line[256]="this is a test";
    f1<<line;
    f1.close();
    return(0);
}
