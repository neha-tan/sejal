#include<stdio.h>
int maximum(int a[],int n,int max){
   if(n<0)
   {
    return max;
   }
   else
   {
    if(a[n-1]>max)
    {  
      max=a[n-1];
    }
   } 
    return maximum(a,--n,max);
}   
int minimum(int a[],int n,int min){
   if(n<=0)
   {
    return min;
   }
   else
   {
    if(a[n-1]<min)
    {  
      min=a[n-1];
    }
   } 
    return minimum(a,--n,min);
}           
         
 
 int main(){
  int a[50],n,i,max,min;
   printf("enter number of element");
   scanf("%d",&n);
   printf("enter element");
    for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     }
     max=a[i];
     min=a[i+1];
      printf("maximum element %d :\n",maximum(a,n,max));
      printf("minimum element %d :\n",minimum(a,n,min));
}

     
