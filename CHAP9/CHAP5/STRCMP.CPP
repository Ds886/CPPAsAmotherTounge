#include <iostream.h>
#include <string.h>
main()
{
char word1[10]="peace",word2[10]="war";
if (strcmp(word1,word2)<0)
       cout<<word1<<'<'<<word2<<'\n';
if (strcmp(word1,word2)>0)
       cout<<word1<<'>'<<word2<<'\n';
if (strcmp(word1,word2)==0)
       cout<<word1<<"=="<<word2<<'\n';
return 0;
}