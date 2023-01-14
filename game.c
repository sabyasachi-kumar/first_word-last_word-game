#include <stdio.h>
#include <string.h>
int main()
{ int i;
    char s1[26];
 char s2[26];
 scanf("%s", s1);
 for(;;){
 for(i=0; i<=strlen(s1); i++)
 {if(i==strlen(s1))
 {scanf("%s",s2);
 if(s2[0]==s1[i-1])
 {
     continue;
     
 }
 else
 {
     printf("wrong word");
 }
     
     
     
 }
 }
 }
 return 0;
}
