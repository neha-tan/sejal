#include<stdio.h>
 void specialchar(char choice){
 
 if(choice>='a'&&choice<='b')
    printf("lowercase");
 else if(choice>='A'&&choice<='Z')
    printf("uppercase"); 
 
 }   
 int main(){
 char choice;
 printf("enter your choice : ");
 scanf("%c",&choice); 
 specialchar(choice);
 } 
      
