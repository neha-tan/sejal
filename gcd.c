#include<stdio.h>
 int gcddd(int n1,int n2,int gcd){
  while(n1!=n2){
    if(n1>n2) 
      {
       n1=n1-n2;
      }
    else 
       n2=n2-n1;
   
    printf("GCD : %d\n",n2);
 }
 }
int main(){
 int n1,n2,gcd;
 printf("enter a value");
 scanf("%d",&n1);
 printf("enter a value"); 
 scanf("%d",&n2);
 gcddd(n1,n2,gcd);
 } 
  
                                                                                   
