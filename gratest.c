#include<stdio.h>
int greatest(int a,int b, int c){
    
    if(a>b&&a>c)
    printf("greatest value : %d",a);
    if((b>a)&&(b>c)) 
    printf("greatest valve : %d",b);
    if(c>a&&c>b)
    printf("greatest value : %d\n",c);    
}
int main()
{ 
 int a,b,c;
 printf("enter first value");
 scanf("%d",&a);
 printf("enter second value");
 scanf("%d",&b);
 printf("enter third value");
 scanf("%d",&c);
 greatest(a,b,c);
}
   
