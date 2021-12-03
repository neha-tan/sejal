//print value of the character
#include<stdio.h>
char asciivalue(char);
     char asciivalue(char ch){
         if((ch>='A'&&ch<='B')||(ch>='a'&&ch<='z'))
            printf("alphabate");
         else
            printf("not an alphabate");
     }
int main(){
char ch;
    printf("enter a choice");
    scanf("%c",&ch);
    asciivalue(ch);
}
