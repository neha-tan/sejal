#include<stdio.h>
void pattern(){

 int i,j;
  for(i=1;i<=10;i++){
      for(j=1;j<=9;j++){
          if(i==j||j==9-i)
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
