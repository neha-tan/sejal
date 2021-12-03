#include<stdio.h>
void  posorneg(int n){
 
 if(n<0)
    printf("negative number");
  
  else  
    printf("positive number");
 }
int main(){ 
 int n;
 printf("enter number");
 scanf("%d",&n); 
 posorneg(n);  
} 
