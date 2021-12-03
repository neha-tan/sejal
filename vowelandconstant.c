#include<stdio.h>
char vowel(char n){

 if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
  printf("character is vowel");
 else 
  printf("character is constant");
}
int main(){
 char n,a,e,i,o,u;
 printf("enter a character");
 scanf("%c",&n);
 vowel(n);
 }
