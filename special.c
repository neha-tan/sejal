#include<stdio.h>
 void specialchar(char choice){
 
 if(choice>='a'&&choice<='b')
    printf("lowercase");
 else if(choice>='A'&&choice<='Z')
    printf("uppercase"); 
 else if(choice>='0'&&choice<='9'||choice=='-')
    printf("digit");
 //else if(choice=='-') 
   // printf("digit");
 else
    printf("special character");
    
 }   
 int main(){
 char choice;
 printf("enter your choice : ");
 scanf("%c",&choice); 
 specialchar(choice);
 } 
      
