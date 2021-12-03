#include<stdio.h>
void reverse(int n,int r,int sum){
sum=0;
do{

 r = n%10;
 sum = sum*10+r;
 n = n/10;
 printf("  = %d  \n",sum);
 }while(n!=0);
 
} 
int main(){
 int n,sum,r;
 printf("enter a value");
 scanf("%d",&n);
 
 reverse(n,sum,r);
} 
