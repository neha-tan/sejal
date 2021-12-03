#include<stdio.h>
void polin(){

int n,r,sum=0,temp;
  printf("enter a number");
  scanf("%d",&n);
  temp=n;
 while(n!=0){ 
 r=n%10;
 sum=sum*10+r;
 n=n/10;
 }
  if(temp==sum){
    printf("polindorm");
    }
   else
     printf("not polindorm");
}
int main(){
 polin();
}        
