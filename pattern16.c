#include<stdio.h>
void pattern(){

 int i,j,s;
  for(i=9;i>=1;i--){
    for(s=1;s<i;s++){
       printf(" ");
     }  
       for(j=1;j<=7;j++){
         if(i==1||i==9||j<=7||j==1)
           printf("*");
         else
           printf(" ");
       }
         printf("\n");
  }
}
int main(){
  pattern();
}
