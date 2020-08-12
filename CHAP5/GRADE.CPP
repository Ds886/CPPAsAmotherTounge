#include <iostream.h>
#include "grade.h"
void grade::input_grades()
 {
 cout<<"input math grade\n";
 cin>>math;
  cout<<"input english grade\n";
 cin>>english;
  cout<<"input physics grade\n";
 cin>>physics;
 }
 main()
 {
 float max;
 grade student[5];
 int i;
 for(i=0;i<5;i++)
   student[i].input_grades();
 for(i=1,max=student[0].find_average();i<5;i++)
    if (student[i].find_average()>max) max=student[i].find_average();
 cout<<"The best average is "<<max<<'\n';
 return 0;
 }
