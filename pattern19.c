#include<stdio.h>
void pattern(){
int i,j;
  for(i=1;i<=11;i++){
      for(j=11;j>=1;j--){
          if(i==j||j==1||i==11)
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
