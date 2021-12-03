#include<stdio.h>
void armstronm(int n,int sum,int rem,int temp){
   temp=n;
  while(n!=0){
  
 rem=n%10;
 sum=sum+rem*rem*rem;
 n=n/10;
  }
 if(sum==temp){
    printf("armstronm\n");
 }
    else
    printf("not armstronm\n"); 
  
}
int main(){
 int sum=0,n,rem,temp;
 printf("enter a value armstrom\n");
 scanf("%d",&n);
 armstronm(n,sum,rem,temp);
}
