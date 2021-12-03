#include<stdio.h>
void divisible(int num){
 if((num%5==0)&&(num%11==0))
     printf("number is divisible\n");
   else
     printf("number is not divisible\n");
}
void main(){
   int num;
   printf("enter number");
   scanf("%d",&num); 
   divisible(num);
}         
