#include<stdio.h>

void maximum(int n1,int n2){
  if(n1>n2)
     printf("%d is maximum : ",n1);
     if(n2>n1) 
        printf("%d is maximum : ",n2);
        if(n1==n2) 
           printf("both are equal\n");
}
void minimum(int n1,int n2){ 
  if(n1<n2)
     printf("%d is minimum : ",n1);
     if(n2<n1) 
        printf("%d is minimum : ",n2);
        if(n1==n2) 
           printf("both are equal\n");
}  
 
void main(){
 int n1,n2;
     printf("enter number  = ");
     scanf("%d",&n1);         
     printf("enter number  = ");
     scanf("%d",&n2);         
   maximum(n1,n2); 
   minimum(n1,n2);
}    
