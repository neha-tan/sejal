#include<stdio.h>
void lcm(int num1,int num2,int LCM,int GCD,int temp,int a,int b){
 
 a=num1;
 b=num2;
 do{
 
 temp=num2;
 num2=num1;
 num1=temp;

 GCD = num1;
 printf("GCD of %d and %d = %d\n",a,b,GCD);
 
 LCM = (a * b)/ GCD;
 printf("LCM of %d and %d = %d\n",a,b,LCM);
 }while(num2!=0);
}
int main(){

 int num1,num2,LCM,GCD,temp,a,b;
 printf("enter first number");
 scanf("%d",&num1);
 printf("enter second number");
 scanf("%d",&num2);
 lcm(num1,num2,LCM,GCD,temp,a,b);
} 
 
