 
#include<stdio.h>
void asterisk()
{
 char ch[]="**********.";
 char c='A';
 int i=0;

 
 while(c)
 {
   c='A';
  printf("%c\a",ch[i]);
  i++;
  if(i==10)
  {
   printf(" "); 
   i=0;
  }
 }
} 
int main(){
 asterisk();
} 
