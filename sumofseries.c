#include<stdio.h>
void sumofseries(int sum,int rem,int num){
 
 while(num>0){
 
 rem = num%10;
 sum = sum + rem;
 num = num / 10;
 
 printf("sum of given number =  %d\n",sum);
 
 }
}
int main(){

int sum=0,rem,num;
  printf("enter number = ");
  scanf("%d",&num);
  sumofseries(sum,rem,num);
}   
 
