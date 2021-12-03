#include<stdio.h>

int main(){
int a[100],first,last,i,n,key,mid;

 printf("enter number of element in array");
 scanf("%d",&n);
 
 printf("enter element %d\n",n);
 
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
 printf("enter your number search");
 scanf("%d",&key);
 
 first=0;
 last=n-1;
 
 mid=first+last/2;
 
 while(first<=last){
 
      if(a[mid]<key){
         first=a[mid]+1;
      }   
         else if(a[mid]==key){
               printf("element found %d",key); 
               break;
          }     
           else {
               last=a[mid]-1;
               mid=first+last/2;
           }        
        if(first>last){  
           printf("Not found! %d\n", key);
        }
      }     
}             
