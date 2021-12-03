#include<stdio.h>
void pattern(){

 int i,j;
  for(i=1;i<=10;i++){
      for(j=1;j<=10;j++){
         if(i<=10||j<=10)
           printf("*");
      
      }
         printf("\n");
  }
}
int main(){
  pattern();
}           
