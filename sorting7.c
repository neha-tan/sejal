#include<stdio.h>

int main(){
int a[100],first,last,i,j,n,key,mid;

 printf("enter number of element in array");
 scanf("%d",&n);
 
 printf("enter element %d\n",n);
 
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }   
 for(i=0;i<n;i++){
     key=a[i];
     j=i-1;
 } 
   while(j>=0&&a[j]>key){ 
       a[j+1]=a[j];
       j=j-1;
  }  
     a[j+1]=key;
  for(i=0;i<n;i++){
     printf("%d",a[i]);
  }       
}           
 
 
