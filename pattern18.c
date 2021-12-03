#include<stdio.h> 
void pattern(){
 int i,j;
 for(i=1;i<=11;i++){
      for(j=1;j<=11;j++){
          if(i==j||j==11||i==1)
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
