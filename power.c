#include<stdio.h>
void power(int num,int a,int b,int c){
a= num;
b=num*a;
c=b*num;
printf("\nOutput Is\n\n");
printf("%d ,%d ,%d \n\n",a,b,c);
}
int main()
{
int num,a,b,c;
printf("\nEnter The Number .\n");
scanf("%d",&num);
power(num,a,b,c);
}
