#include<stdio.h>
void pattern(){

 int i,j;
  for(i=1;i<=10;i++){
      for(j=1;j<=10;j++){
         if(j==10||i==1||i==10||j==1)
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
