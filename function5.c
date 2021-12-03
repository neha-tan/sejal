#include<stdio.h>
#include<math.h>
int prime(int num);
int armstrong(int num);
int perfect(int num);
 
int main()
{
 int num;
     printf("enter a number");
     scanf("%d",&num);
     
   if(prime(num)){  
      printf("number is prime");
   }   
    else{
      printf("number is not prime");  
    }
   if(armstrong(num)){
      printf("number is armstrong");
   }   
    else{
      printf("number is not armstrong");
    }   
   if(perfect(num)){
      printf("number is perfect");
   }   
    else{
      printf("number is not perfect");  
    }  
     return 0;
}
int prime(int num)
{
 int i;
     for(i=2;i<=num/2;i++){
         
         if(num%2==0){

           return 0; 
         }
           return 1;
     }
}                     
         
