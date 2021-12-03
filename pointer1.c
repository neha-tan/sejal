#include<stdio.h>
void addition(int x,int y,int *z){
  *z=x+y;
}
int main(){
int x,y,a;
   printf("enter 2 number");
   scanf("%d%d",&x,&y);
   
   addition(x,y,&a);

   printf("%d+%d=%d\n",x,y,a);
}
