#include<stdio.h>
void swaparray(int *p1,int *p2)
{
     int temp;
     temp=*p1;
     *p1 =*p2;
     *p2 =temp;
}
int main(){
  
 int x[10];
 int i,n;
          printf("enter element");
          scanf("%d",&n);
          printf("enter one by one");
      for(i=0;i<n;i++)
          scanf("%d",x+i);
          swaparray(x+2,x+3);
          printf("resultant value");
      for(i=0;i<n;i++)
         printf("x[%d] = %d\n",i,x[i]);
}
