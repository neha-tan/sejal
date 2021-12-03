#include<stdio.h>
void trianglevalid(int a,int b,int c){

  if(a+b+c==180)
    printf("triangle is valid\n");
  else 
    printf("triangle is not valid\n");
}
int main(){
int a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    trianglevalid(a,b,c);
}
