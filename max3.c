#include<stdio.h>
void maximum(int n1,int n2,int n3){
  if(n1>n2&&n1>n3)
     printf("%d is max : ",n1);
     if(n2>n1&&n2>n3) 
        printf("%d is max : ",n2);
        if(n3>n1&&n3>n2)
           printf("%d is max : ",n3);
        if(n1==n2||n2==n3||n3==n1) 
           printf("equal");
}  
void main(){
 int n1,n2,n3;
     printf("enter number");
     scanf("%d",&n1);         
     printf("enter number");
     scanf("%d",&n2);  
     printf("enter number");
     scanf("%d",&n3);  
            
   maximum(n1,n2,n3); 
}    
