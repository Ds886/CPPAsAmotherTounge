#include <iostream.h>
char *find_str(char *str,char *words);
char *find_str(char *str,char **words)
  {
  char *start;
  int i;
  for(i=0;i<7;i++)
    {
    start=words[i];
    while(*str && (*str==*start))
      {
      str++;
      start++;
      }
    if ( (*str)==0 )
       return(words[i]);
  }
  return words[0];
}
main()
{
char *week[7]={"sunday","monday","tuesday","wednsday","thursday","friday",
		"saturday"},*day;
day=find_str("mon",week);
cout<<day<<'\n';
day=find_str("fri",week);
cout<<day<<'\n';
return 0;
}