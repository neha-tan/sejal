#include<stdio.h>
 int twogreatest(int a,int b){
  if(a>b)
   printf("greater %d ",a);
  else
   printf("greater %d ",b); \
 }
 int main(){
 int a,b;
 printf("enter a value");
 scanf("%d",&a);
 printf("enter b value");
 scanf("%d",&b);
 twogreatest(a,b);
 }
