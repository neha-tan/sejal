#include<stdio.h>
void reverse(int i){
 do{
 printf("%d\n",i);
        i--;
 } while(i>=1);
}
int main(){
 int i;
 printf("enter a value\n");
 scanf("%d",&i);
 reverse(i); 
}
