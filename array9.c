#include<stdio.h>

int sumarray(int a[],int size){
     
    
      if(size==0)
      {
       return 0;
      }
      return a[size-1] + sumarray(a,size-1); 
 } 
void main(){
 int a[50],sum=0,size,i;
 
     printf("enter size of the array");
     scanf("%d",&size);
     
     printf("enter element");
      for(i=0;i<size;i++)
     {
        scanf("%d",&a[i]);
     }
   printf("sum of array element are %d",sumarray(a,size)); 
 }   
 
