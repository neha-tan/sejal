//leap year
#include<stdio.h>
 int leapyear(int n){
  if(n%4==0)
   printf("leap year");
  else
   printf("not a leap year");
  }
int main(){
 int n;
 printf("enter year");
 scanf("%d",&n); 
 leapyear(n);
}
