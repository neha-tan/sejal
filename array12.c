#include<stdio.h>

void negative(){
    
 int arr[50],size,i;
 
     printf("enter size of the array");
     scanf("%d",&size);
     
     printf("enter element");
      for(i=0;i<size;i++)
     {
        scanf("%d",&arr[i]);
     }
     for(i=0;i<size;i++)
     {
      if(arr[i]<0) 
      {
       printf("negative element %d : ",arr[i]);
      }
     } 
}
int main(){

 negative();
  
  return 0;
}         

