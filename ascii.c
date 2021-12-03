#include<stdio.h>
char ascii(char);
char ascii(char ch){

printf("ascii value of %c=%d",ch,ch);
}
int main(){
char ch;
printf("enter a alphabate");
scanf("%c",&ch);
ascii(ch);
}
