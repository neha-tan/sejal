#include<stdio.h>
void reverse(int i){
  while(i>=1){
 printf("%d\n",i);
        i--;
 }
}
int main(){
 int i;
 printf("enter a value\n");
 scanf("%d",&i);
 reverse(i); 
}
