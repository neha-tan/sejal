#include<stdio.h>
void plus(){

 int i,j;
  for(i=1;i<=10;i++){
      for(j=1;j<=10;j++){
      if(i==10||j==10||i==1||j==1||i==j||j==10-i)
         printf("*");
      else
         printf(" ");
      }
         printf("\n");
  }
}
int main(){
  plus();
}           
