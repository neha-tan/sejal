#include<stdio.h>
void polin(){

int n,r,sum=0,temp;
  printf("enter a number");
  scanf("%d",&n);
  temp=n;
 do{ 
 r=n%10;
 sum=sum*10+r;
 n=n/10;
 }while(n!=0);
  if(temp==sum){
    printf("polindorm");
    }
   else
     printf("not polindorm");
}
int main(){
 polin();
}        
