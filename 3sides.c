#include<stdio.h>
void sides(int a,int b,int c){

  if(a==b&&b==c){
    printf("eqilateral triangle\n");
    }
  else if(a==b||b==c||c==a){ 
    printf(" isoscele triangle\n");
  }
  else
    printf("scalen triangle\n");
}
int main(){
int a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    sides(a,b,c);
}
