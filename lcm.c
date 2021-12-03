#include<stdio.h>
 int lcmm(int n1,int n2,int gcd,int lcm,int x,int y){
  while(n1!=n2){
    if(n1>n2) 
      
       n1=n1-n2;
      
    else 
       n2=n2-n1;
   
    printf("GCD : %d\n",n2);

  x=n1;
  y=n2;
  gcd=n1;
  lcm=(x*y)/gcd;
  
  printf("lcm : %d\n",lcm);
  }
 }
int main(){
 int n1,n2,gcd,lcm,x,y;
 printf("enter a value");
 scanf("%d",&n1);
 printf("enter a value"); 
 scanf("%d",&n2);
 lcmm(n1,n2,gcd,lcm,x,y);
 } 
  
