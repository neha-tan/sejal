#include<stdio.h>
int evenodd(int n){

   if(n%2==0)
    printf("even");
   else 
    printf("odd");
    
 }
 int main(){
 int n;
 printf("enter integer");
 scanf("%d",&n);  
 evenodd(n); 
 }

