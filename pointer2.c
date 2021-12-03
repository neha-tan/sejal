#include<stdio.h>
void swaptwonumber(int *p,int *q)
{
 *p=*p+*q;
 *q=*p-*q;
 *p=*p-*q;
}
int main(){
 int a,b;
 printf("enter two number");
 scanf("%d%d",&a,&b);
 printf("before swapping a : %d,b : %d\n",a,b);
 swaptwonumber(&a,&b);
 printf("after swapping a : %d,b : %d\n",a,b);
 }
