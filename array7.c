#include <stdio.h>
int main()
{
    int a[100],i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("array element are : ");
     print(a,0,n);
}
void print(int a[],int first,int len){
        if(first>=len)
        return;
        
        printf("array element in number %d is %d \n",first,a[first]); 
               return print(a,first+1,len); 
}                 
