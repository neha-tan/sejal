#include<stdio.h>
void reverse(int n,int r,int sum){
sum=0;
while(n!=0){

 r = n%10;
 sum = sum*10+r;
 n = n/10;
 printf("  = %d  \n",sum);
 }
 
} 
int main(){
 int n,sum,r;
 printf("enter a value");
 scanf("%d",&n);
 
 reverse(n,sum,r);
} 
