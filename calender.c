#include<stdio.h>
void calender(){
   int i,days;
   int a;
   printf("enter no of days in a month:\n");
   scanf("%d",&days);
   printf("enter first day in a month:\n");
   scanf("%d",&a);
   for(i=1;i<a;i++)
      printf(" ");
   for(i=1;i<=days;i++){
      printf("%3d",i);
      if((a+i-1)%7==0)
         printf("\n");
   }
}   
int main(){   
  calender();   
}


