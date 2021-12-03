#include<stdio.h>
void greatesttwo(int a,int b){

 if(a>b)
   printf("a is greater");
 else if (b>a)
   printf("b is greater");
}
int main(){
 int  a,b;
 printf("enter value a : ");  
 scanf("%d\n",&a);
 printf("enter value b : ");  
 scanf("%d\n",&b);\
 greatesttwo(a,b);
 }
