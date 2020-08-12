struct grade{
  float math,english,physics;
  void input_grades();
  float find_average()
   {
   return((math+english+physics)/3);
  }
 };